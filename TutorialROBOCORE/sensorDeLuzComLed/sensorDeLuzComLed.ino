/*******************************************************************************
* Acender o LED quando o LDR indicar iluminação abaixo do limite.
*******************************************************************************/

const int pinoLDR = A0; // pino onde o LRD está conectado
const int pinoLED = 7; // pino onde o LED está conectado
int leitura = 0; // variável para armazenar o valor lido pelo ADC

void setup() {
  // configura os pinos do LDR e LED
  pinMode(pinoLDR, INPUT); 
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  // le o valor de ADC no pino do LDR
  leitura = analogRead(pinoLDR);

  // verifica luminosidade do ambiente
  if(leitura < 100){ // se a luminosidade for menor que 70
    digitalWrite(pinoLED,HIGH); // acende o LED
  }
  else { // se não
    digitalWrite(pinoLED,LOW); // apaga o LED
  }
  Serial.println();
  delay(100); // aguarda 100 milissegundos para uma nova leitura
}
