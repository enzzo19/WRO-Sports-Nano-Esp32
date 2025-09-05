
#include <Arduino.h>

// Define input pins
#define INPUT_PIN_1 24
#define INPUT_PIN_2 23
#define INPUT_PIN_3 19

void setup() {
	Serial.begin(115200);
	pinMode(INPUT_PIN_1, INPUT_PULLUP);
	pinMode(INPUT_PIN_2, INPUT_PULLUP);
	pinMode(INPUT_PIN_3, INPUT_PULLUP);
}

void loop() {
	int val1 = digitalRead(INPUT_PIN_1);
	int val2 = digitalRead(INPUT_PIN_2);
	int val3 = digitalRead(INPUT_PIN_3);
	Serial.print("Pin 24 (DER): ");
	Serial.print(val1);
  Serial.print(" | Pin 19 (BACK): ");
	Serial.print(val3);
	Serial.print(" | Pin 23(IZQ): ");
	Serial.println(val2);
	delay(1000);
}

