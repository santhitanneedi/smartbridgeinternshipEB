const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(26,OUTPUT);
pinMode(27,OUTPUT);
pinMode(32,OUTPUT);
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
  if (distance<=5)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
  }
  if ((distance>5)&&(distance<10))
  {
    digitalWrite(26,HIGH);
  }
   else
  {
    digitalWrite(26,LOW);
  }
  if ((distance>10)&&(distance<15))
  {
    digitalWrite(27,HIGH);
  }
   else
  {
    digitalWrite(27,LOW);
  }
  if(distance>20)
  {
    digitalWrite(32,HIGH);
  }
   else
  {
    digitalWrite(32,LOW);
  }
}
