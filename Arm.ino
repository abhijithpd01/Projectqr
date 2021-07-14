#include <Servo.h>

Servo servo1;  
Servo servo2;
Servo servo3;

int pos = 0;  
char mydata=0;

  
void setup() {
  
  Serial.begin(9600);
  servo1.attach(6);  
  servo2.attach(9);
  servo3.attach(10);
 
}
 
void loop() {
  int pos = 0;  
   mydata= int(Serial.read());
   if(mydata=='1')
   dat1();
   if(mydata=='2')
   dat2();
   if(mydata=='3')
   dat3();
   
   
}
void dat1() {
  
    servo1.write(180);
    for (pos = 60; pos <= 160; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
    
    servo1.write(60);
    delay(2000);
    servo1.write(180);
    delay(5000);
    
    for (pos = 180; pos >= 60; pos -=1) { 
    servo3.write(pos);}
    delay(5000); 
    for (pos =0; pos <= 60; pos +=1) { 
    servo2.write(pos);}
    delay(5000);
    for (pos = 60; pos <= 160; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
      
    servo1.write(60);
    delay(5000);
    servo1.write(180);
    
    
    for (pos = 150; pos >= 60; pos -=1) { 
    servo3.write(pos);}
    delay(5000); 
    servo2.write(90);
    delay(5000);
    
}

void dat2() {
    servo1.write(180);
    for (pos = 60; pos <= 180; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
    
    servo1.write(60);
    delay(2000);
    servo1.write(180);
    delay(5000);
    
    for (pos = 150; pos >= 60; pos -=1) { 
    servo3.write(pos);}
    delay(5000); 
    for (pos =0; pos <= 120; pos +=1) { 
    servo2.write(pos);}
    delay(5000);
    for (pos = 60; pos <= 140; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
      servo1.write(60);
    delay(5000);
    
    servo1.write(180);
    for (pos = 150; pos >= 60; pos -=1) { 
    servo3.write(pos);}
    delay(5000); 
    servo2.write(90);
    delay(5000);
    
}
void dat3() {
    servo1.write(180);

    for (pos = 60; pos <= 180; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
    
    servo1.write(60);
    delay(2000);
    servo1.write(180);
    delay(5000);
    
    for (pos = 150; pos >= 60; pos -=1) { // 
    servo3.write(pos);}
    delay(5000); 
    for (pos =0; pos <= 180; pos +=1) { // 
    servo2.write(pos);}
    delay(5000);
    for (pos = 60; pos <= 140; pos +=1) { 
    servo3.write(pos);}
    delay(5000); 
    servo1.write(60);
    delay(5000);
    
    servo1.write(180);
    for (pos = 150; pos >= 60; pos -=1) { // 
    servo3.write(pos);}
    delay(5000); 
    servo2.write(90);
    delay(5000);
    
  }
