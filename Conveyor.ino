int obstaclePin = 10;
int hasObstacle = HIGH;
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);
 
  motor1.setSpeed(500);
  motor2.setSpeed(500);
    
}
void loop() {
  hasObstacle = digitalRead(obstaclePin);
  if (hasObstacle == LOW)
  {
   
   motor1.run(RELEASE);
  motor2.run(RELEASE);
  }
  else
  {
    
    motor1.run(FORWARD);
  motor2.run(FORWARD);
  }
  delay(200);
}
