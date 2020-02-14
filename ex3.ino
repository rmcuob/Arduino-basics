/*
  Turn LED on when IR sensor detects presence
*/


#define IR 7
#define LED 8 

bool warning = false;

void setup()
{
	pinMode(IR,INPUT);
	pinMode(LED,OUTPUT);

}

void loop()
{
	if(digitalRead(IR) == HIGH) //If it doesn't work, try LOW instead of HIGH. Sometimes the sensor output is different depending on the model
	{
		digitalWrite(LED,HIGH);
	}
	else
	{
		digitalWrite(LED,LOW);
	}
}