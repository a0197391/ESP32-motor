#include<Servo.h>
Servo myservo;

const int servoPin=14;
int pos=0;

void setup() {
 myservo.attach(servoPin);
  Serial.begin(115200);
  pinMode(13,INPUT);
}

void loop() {
  int input=analogRead(13);
  Serial.println(input);
  int input_map=map(input,0,4095,0,180);
  myservo.write(input_map);
}
