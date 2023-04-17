// C++ code
//Entrada Digital - Chave ON/OFF
//Ler uma entrada Pino 8, e
//Escrever p estado no Pino 7
int EstadoDaChave = 0;
int EstadoLed = 0;


void setup()
{
  pinMode(8, INPUT);
  pinMode(7, OUTPUT); 
}

void loop()
{
  EstadoDaChave = digitalRead(8);
  if (EstadoDaChave == HIGH){
  EstadoLed =! EstadoLed;
  digitalWrite(7,EstadoLed);
  }
  delay(100); //Delay pequeno para promover simulação
}