//variaveis da led
const int vermelho = 5;
const int verde = 6;
const int azul = 7;

bool estadoLedVermelho = false;
//adiçao de um botao 
const int botao1 = 2;
const int botao2 = 3;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
const int botaoDelay = 100;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  //saida led azul
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
Serial.begin(9600);
  //nome do grupo
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
Serial.println("                           V1.0");
  Serial.println("Grupo: bullfrog               ");
}
//acender e apagar led vermelho
void loop()
{
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
Serial.println("botao 1 apertado");
    ledVermelho(true);
  	lastDebounceTime1 = millis();
  }
if((millis() - lastDebounceTime2) > botaoDelay && digitalRead(botao2)){
  Serial.println("luminosidade elevada");
  }else{
  	ledVerde(false);
Serial.println("botao 2 apertado");
    ledVermelho(false);
  	lastDebounceTime2 = millis();
  }
  if(getTemperatura() > 15){
    ledAzul(true);
Serial.println("temepatura elevada");
  }else{
  	ledAzul(false);
    Serial.println("temepatura ideal");
  }
  	if(getLuminosidade() > 5){
    ledVerde(true);
Serial.println("luminosidade elevada");
  }else{
  	ledSerial.println("luminosidade ideal");
  }
  delay(10);
}Verde(false);
void ledVermelho(bool estado){
 digitalWrite(vermelho,estado);
}
