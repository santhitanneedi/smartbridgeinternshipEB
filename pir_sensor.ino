void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(4,INPUT);
int digitalRead(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(4);
  if(a==1)
  {
   Serial.println("detected");
 digitalWrite(2,HIGH);
  }
  else
  {
  Serial.println("not detected");
 digitalWrite(2,LOW);
}
}
