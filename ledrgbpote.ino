#define ROJO 6
#define VERDE 3
#define AZUL 5
#define POTEROJO A0
#define POTEVERDE A1
#define POTEAZUL A2
void setup() {
  
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ROJO,OUTPUT);
pinMode(VERDE,OUTPUT);
pinMode(AZUL,OUTPUT);
pinMode(POTEROJO,INPUT);
pinMode(POTEVERDE,INPUT);
pinMode(POTEAZUL,INPUT);
}
  int rojov = 0;
  int verdev = 0;
  int azulv = 0;
void loop() {
  // put your main code here, to run repeatedly:
  rojov = map(analogRead(POTEROJO),0,1023,0,255);
  verdev = map(analogRead(POTEVERDE),0,1023,0,255);
  azulv = map(analogRead(POTEAZUL),0,1023,0,255);
  
  analogWrite(ROJO,rojov);
  analogWrite(VERDE,verdev);
  analogWrite(AZUL,azulv);
  /*Serial.print("Rojo: ");
  Serial.println(rojov); 
  Serial.print("Verde: ");
  Serial.println(verdev);
  Serial.print("Azul: ");
  Serial.println(azulv);*/
  
  

}
