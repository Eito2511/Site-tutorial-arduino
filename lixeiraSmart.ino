#include <Servo.h>

const int trigPinSaida = 3;
const int echoPinEntrada = 2;
const int pinoBuzzer = 5;
const int pinoServo = 4;

Servo meuServo;

bool tampaAberta = false;
unsigned long tempoAberturaTampa = 0;

void setup() {
  pinMode(trigPinSaida, OUTPUT);
  pinMode(echoPinEntrada, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
  meuServo.attach(pinoServo);
  meuServo.write(0);
  Serial.begin(9600);
}

void loop() {
  int distancia = obterDistancia();

  if (distancia <= 20 && !tampaAberta) {
    abrirTampa();
  }

  if (tampaAberta && distancia > 20) {
    if (millis() - tempoAberturaTampa > 3000) {
      fecharTampa();
    }
  }

  delay(1000);
}

int obterDistancia() {
  digitalWrite(trigPinSaida, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPinSaida, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinSaida, LOW);

  long duracao = pulseIn(echoPinEntrada, HIGH);
  int distanciaCalculada = duracao * 0.034 / 2;
  return distanciaCalculada;
}

void abrirTampa() {
  meuServo.write(120);
  tampaAberta = true;
  tempoAberturaTampa = millis();
  tocarBipe(1);
}

void fecharTampa() {
  meuServo.write(0);
  delay(200);
  tampaAberta = false;
  tocarBipe(2);
}

void tocarBipe(int vezes) {
  for (int i = 0; i < vezes; i++) {
    tone(pinoBuzzer, 2000);
    delay(400);
    noTone(pinoBuzzer);
    delay(400);
  }
}
