# Lixeira Automatizada com Arduino

*Este projeto apresenta uma solução inteligente para facilitar o descarte de resíduos, utilizando tecnologia para tornar o processo mais higiênico e prático. Através de um protótipo de lixeira automatizada, que abre ao detectar a aproximação do usuário, promovemos o aprendizado prático e a interdisciplinaridade entre Sistemas Digitais e Introdução à Computação.*  


## Objetivo
*Desenvolver uma lixeira automática que:
Detecta a aproximação do usuário usando um sensor de distância (ultrassônico ou infravermelho)
Abre a compartimento com um servo motor
Emite sons de aviso com um buzzer (um beep ao abrir, dois beeps ao fechar)
Promove o aprendizado de eletrônica, programação e desenvolvimento de protótipos
Além disso, criar um site em HTML e CSS que apresente o projeto de forma clara, didática e acessível, integrando teoria e prática.*

## Componentes Utilizados

* Sensor de proximidade (ultrassônico ou infravermelho): Detecta a presença do usuário
* Servo motor: Abre a tampa da lixeira automaticamente
* Buzzer: Emite sons de aviso ao abrir e fechar
* Jumpers: Conexões entre componentes e placa Arduino
* Placa BlackBoard UNO R3 (compatível com Arduino UNO): Controlador do sistema

## Como funciona
*O sensor de proximidade detecta a aproximação do usuário. Quando a proximidade é detectada, o Arduino aciona o servo motor para abrir a tampa. Um beep é emitido pelo buzzer para indicar que a lixeira está abrindo. Após um tempo, o servo motor fecha a tampa. Dois beeps são emitidos para indicar que a tampa foi fechada.*

## Como montar
*Conecte o sensor de proximidade ao Arduino (pinos de Trigger e Echo para sensor ultrassônico ou pinos de infravermelho). Conecte o servo motor ao pino PWM do Arduino. Conecte o buzzer a um pino digital do Arduino. Faça as conexões com jumpers conforme o esquema de montagem (não fornecido aqui, mas disponível no tutorial).*
