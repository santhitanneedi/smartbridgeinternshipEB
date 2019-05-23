#include <Servo.h>
Servo myservo;//Create servo object to control a servo
int pos=0;
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup() {
  myservo.attach(13);
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run:
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH); 
 delayMicroseconds(1000);
 digitalWrite(trigPin,LOW);
 duration=pulseIn(echoPin,HIGH);
 distance=duration*0.034/2;
 Serial.print("Distance:");
 Serial.println(distance);
 if (distance<=10)
  {
    for(pos=0;pos<=180;pos+=1)
    {
    myservo.write(pos);
    delay(15);
    } 
    for(pos=180;pos>=0;pos-=1){
    myservo.write(pos);
    delay(15);
    }
  }
  
}
