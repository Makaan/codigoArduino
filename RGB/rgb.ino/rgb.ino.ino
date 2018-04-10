#define VERDE 11
#define AZUL 12
#define ROJO 13

void setup()
{
  for(int i = 11; i <= 13; i++)
    pinMode(i, OUTPUT);
}

int delayVerde = 150;
int delayApagadoVerde = 650;
int delayAzul = 250;
int delayApagadoAzul = 750;
int delayRojo = 350;
int delayApagadoRojo = 850;
unsigned long mil = 0;

void loop()
{
  mil = millis();

  if(mil % delayVerde == 0)
    digitalWrite(VERDE, HIGH);
  if(mil % delayApagadoVerde == 0)
    digitalWrite(VERDE, LOW);

  if(mil % delayAzul == 0)
    digitalWrite(AZUL, HIGH);
  if(mil % delayApagadoAzul == 0)
    digitalWrite(AZUL, LOW);
    
  if(mil % delayRojo == 0)
    digitalWrite(ROJO, HIGH);
  if(mil % delayApagadoRojo == 0)
    digitalWrite(ROJO, LOW);
}
