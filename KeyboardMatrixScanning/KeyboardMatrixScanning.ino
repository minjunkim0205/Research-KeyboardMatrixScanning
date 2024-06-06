#include <Keypad.h>

const byte ROWS = 4; // four rows
const byte COLS = 4; // four columns
// define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
	{'1', '2', '3', '4'},
	{'q', 'w', 'e', 'r'},
	{'a', 's', 'd', 'f'},
	{'z', 'x', 'c', 'v'}
};
byte rowPins[ROWS] = {6, 7, 8, 9}; // connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; // connect to the column pinouts of the keypad

// initialize an instance of class NewKeypad
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
// customKeypad.setDebounceTime(50); // Unsigned int(ms)

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	char customKey = customKeypad.getKey();
	if (customKey)
	{
		Serial.println(customKey);
	}
}
