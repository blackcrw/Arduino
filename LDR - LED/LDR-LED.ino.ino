//PINO 7 LUZ DE LED
int ledPin = 7; //LUZ BRANCA
//PINOS DO SENSOR LDR
int ldrPin = 0; //LDR no pino analígico 8
int ldrValor = 0; //Valor lido do LDR

//PINOS DO LED RGB
const int azul = 9;
const int verde = 10;
const int vermelho = 11;

void setup() {
  Serial.begin(9600); //Inicia a comunicação serial
  //PINOS DO LED RGB
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
  //PINO LUZ DE LED
  pinMode(ledPin,OUTPUT); //define a porta 7 como saída
}

void vermelhoFuncao(){
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
}
void azulFuncao(){
  digitalWrite(azul, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
}
void verdeFuncao(){
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}
void amareloFuncao(){
  analogWrite(azul, 0);
  analogWrite(verde, 50);
  analogWrite(vermelho, 255);
}
void roxoFuncao(){
  analogWrite(azul, 207);
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
}
void brancoFuncao(){
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
}

void loop() {
 ldrValor = analogRead(ldrPin); //O valor lido será entre 0 e 1023
  if (ldrValor>= 1000){
    digitalWrite(ledPin,HIGH);
    
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  } else{
    digitalWrite(ledPin,LOW);
    
    digitalWrite(azul, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
  }
  Serial.println(ldrValor);
  delay(100);
}
