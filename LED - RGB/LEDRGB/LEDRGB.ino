const int azul = 5;
const int verde = 6;
const int vermelho = 3;

String cor;

void setup()
{
   Serial.begin(9600);
  
   pinMode(azul, OUTPUT);
   pinMode(verde, OUTPUT);
   pinMode(vermelho, OUTPUT);
}

//Funções responsáveis por executar o brilho selecionado
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

void loop()
{
  if(Serial.available()){
    cor = Serial.readString();
    Serial.println(cor);
  }
 
  if(cor == "Vermelho"){
    vermelhoFuncao();
  }
  if(cor == "Azul"){
    azulFuncao();
  }
  if(cor == "Verde"){
    verdeFuncao();
  }
  if(cor == "Amarelo"){
    amareloFuncao();
  }
  if(cor == "Roxo"){
    roxoFuncao();
  }
  if(cor == "Branco"){
    brancoFuncao();
  } 
}
