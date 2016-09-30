#include <Servo.h>
 
#define SERVO 8 // Porta Digital para o Servo
#define potPin A0 // Porta Digital para o Pot
 
Servo s; // Variável Servo
int pos; // Posição Servo

int valuePot; // Valor do potênciometro
 
void setup ()
{
  s.attach(SERVO);
}
 
void loop()
{
  valuePot =  analogRead(potPin);
  valuePot = map(valuePot,0,1023,5,15); 
  
  delay(50);
  for(pos = 0; pos <= 180; pos++)
  {
     movement(valuePot);
  }

  delay(100);
  for(pos = 180; pos >= 0; pos--)
  {
     movement(valuePot);
  }
}

void movement(int value)
{
    s.write(pos);
    delay(value);
}

