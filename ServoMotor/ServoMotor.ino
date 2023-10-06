#include<ESP32Servo.h>

int pos = 0;

Servo myServo;

void setup(){
  myServo.attach(4);
}

void loop(){
  for (pos = 0; pos <= 180 ; pos += 1){
  myServo.write(pos);
  delay(15);
  }

  for (pos = 180; pos >= 0 ; pos -= 1){
  myServo.write(pos);
  delay(15);
  }


}