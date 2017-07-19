#include <Servo.h>

#define SERVO 8
#define POTENCIOMETRO A0
 
Servo s;
int pos;

int valuePot = 0; 
 
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
    valuePot = map(analogRead(POTENCIOMETRO),0,1023,500,2500);
    s.write(pos);
    delay(valuePot);
}
