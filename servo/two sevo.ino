#include <Servo.h>

Servo servo1, servo2;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  servo1.attach(9);
  servo2.attach(10);
  servo1.write(0);
  servo2.write(0);   
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH); 
  servo1.write(0);
  servo2.write(20);
  delay(1000);
  servo1.write(90);
  servo2.write(45);
  delay(1000);
  servo1.write(180);
  servo2.write(70);
  delay(1000);
  servo1.write(90);
  servo2.write(45);
  delay(1000);
}
