#include <Servo.h>

#define SERVO 8 // Porta Digital para o Servo
#define POTENCIOMETRO A0 // Porta Digital para o Pot
 
Servo s; // Variável Servo
int pos; // Posição Servo

int valuePot = 0; // Valor do potênciometro
 
void setup ()
{
  s.attach(SERVO);
}
 
void loop()
{
  for(pos = 0; pos <= 180; pos++)
  {
     movement();
  }

  for(pos = 180; pos >= 0; pos--)
  {
     movement();
  }
}

void movement()
{
    valuePot = map(analogRead(POTENCIOMETRO),0,1023,500,2500); //Faz regra de 3 para encontrar um valor entre 500 e 2500 baseado em valores entre 0 e 1023
    s.write(pos);
    delay(valuePot);
}