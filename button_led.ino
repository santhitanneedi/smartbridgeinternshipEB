
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,INPUT);
int digitalRead(4);
Serial.begin(115200);
}

void loop() {
  int a=digitalRead(4);
  // put your main code here, to run repeatedly:
  if(a==0)
  {
   Serial.println("high");
 digitalWrite(2,HIGH);
delay(1000);
  }
  else
  {
  Serial.println("low");
 digitalWrite(2,LOW);
delay(1000);
}
}
