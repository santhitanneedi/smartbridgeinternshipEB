const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup() {
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
  if (distance>=10)
  {
    digitalWrite(2,HIGH);
  }
  else{
    digitalWrite(2,LOW);
  }
    
  
}
