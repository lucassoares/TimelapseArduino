#include <Servo.h> 

int potpin = 0;
int val; 
Servo myservo; 

int pos = 0;    

void setup() 
{ 
  myservo.attach(9);  
} 

void loop() 
{ 

  for(pos = 0; pos <= 180; pos += 1)  
  {     
    servo();          
  } 
  
  for(pos = 180; pos>=0; pos-=1) 
  {                                
   servo();                    
  } 
} 

void checkPot()
{
  val = analogRead(potpin); 
  val = map(val, 0, 1023, 10, 2000);  
}

void servo()
{
	checkPot();
    myservo.write(pos);           
    delayMicroseconds(val);      
}