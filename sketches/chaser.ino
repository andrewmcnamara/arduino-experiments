int blue= 13;
int orange = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
pinMode(orange,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  digitalWrite(blue,HIGH);
  delay(300);
  digitalWrite(blue,LOW);
  digitalWrite(orange,HIGH);
  delay(300);
  digitalWrite(orange,LOW);
}
