#include "SPI.h"


void setup()
{
	SerialUSB.begin(115200);
	SPI.begin();
	pinMode(5,OUTPUT);
}


void loop()
{
	char ch=0;
	digitalWrite(5,0);
	ch = SPI.transfer('x');
	SerialUSB.print("recv data = ");
	SerialUSB.println(ch);
	digitalWrite(5,1);
	delay(1000);
}
