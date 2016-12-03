

#include "Arduino.h"
#ifndef LED_BUILTIN
#define LED_BUILTIN 1
#endif

#define PIN_LED LED_BUILTIN
#define PIN_BTN 5
#define PIN_POT 15


void setup()
{
	Serial.begin(9600);
	pinMode(LED_BUILTIN, OUTPUT);
	pinMode(PIN_BTN, INPUT_PULLUP);
	pinMode(10, OUTPUT);
	pinMode(PIN_POT, INPUT);
}

void loop()
{
	int p;

	p = analogRead(PIN_POT);
	if (digitalRead(PIN_BTN) == LOW) {
		analogWrite(10, p/4);
	} else  {
		analogWrite(10, 0);
	}

	delay(50);
}
