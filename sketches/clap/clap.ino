int knock = 0;
void setup()
{
 pinMode(13,OUTPUT);
}

void loop()
{
	knock = analogRead(0);
	if (knock > 10)
	{
		digitalWrite(13,HIGH);
		delay(500);
		digitalWrite(13,LOW);
	}
}
