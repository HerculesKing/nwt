int schalterPin = 5;
int redPin = 2;
int grunPin = 4;
int gelbPin = 3;
int redFoot = 6;
int grunFoot = 7;


int schalter = 0;//Schalterzustand

void setup()
{
	pinMode(redPin, OUTPUT);
	pinMode(grunPin, OUTPUT);
	pinMode(gelbPin, OUTPUT);
	pinMode(schalterPin, INPUT);
	pinMode(grunFoot, OUTPUT);
	pinMode(redFoot, OUTPUT);
}

void loop(){
	schalter = digitalRead(schalterPin);

	if (schalter == LOW)
	{
		digitalWrite(redPin, LOW);
		digitalWrite(grunPin, HIGH);
		digitalWrite(gelbPin, LOW);
	}
	else
	{
		delay(5000);
		digitalWrite(grunPin, LOW);
		digitalWrite(gelbPin, HIGH);
		delay(1000);
		digitalWrite(redPin, HIGH);
		delay(4000);
		digitalWrite(gelbPin, HIGH);
		delay(1000);
		
		digitalWrite(gelbPin, LOW);
		digitalWrite(grunPin, HIGH);
		digitalWrite(gelbPin, LOW);
		delay(1000);
	}
}
