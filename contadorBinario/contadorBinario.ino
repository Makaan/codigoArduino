#define PRIMER_BIT 10
#define SEGUNDO_BIT 11
#define TERCER_BIT 12
#define CUARTO_BIT 13

void setup()
{
  for(int i = 10; i <= 13; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  for(int i = 0; i <= 16; i++) {
    (i % 2 == 1 ) ? digitalWrite(PRIMER_BIT, HIGH): digitalWrite(PRIMER_BIT, LOW) ;
    (i % 4 >= 2 ) ? digitalWrite(SEGUNDO_BIT, HIGH): digitalWrite(SEGUNDO_BIT, LOW) ;
    (i % 8 >= 4 ) ? digitalWrite(TERCER_BIT, HIGH): digitalWrite(TERCER_BIT, LOW) ;
    (i % 16 >= 8 ) ? digitalWrite(CUARTO_BIT, HIGH): digitalWrite(CUARTO_BIT, LOW) ;
    delay(500); 
  }
}
