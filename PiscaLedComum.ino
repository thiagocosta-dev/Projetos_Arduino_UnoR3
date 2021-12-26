// Estudo de Arduino UNO R3 - Projeto Pisca LED comum - Autor: Thiago Costa Pereira - Email: thiago.devpython@gmail.com


void setup() {
  pinMode(9, OUTPUT); // Declarando o Pino 9 digital como saída

}

void loop() {
  digitalWrite(9, HIGH); // Mostrando para a placa ler Pino 9 dos pinos digitais como ligado
  delay(500); // Dando um intervalo de 500 milisegundos(meio segundo)
  digitalWrite(9, LOW); // Mostrando para a placa ler Pino 9 dos pinos digitais como desligado
  delay(500); // Outro intervalo 

}
