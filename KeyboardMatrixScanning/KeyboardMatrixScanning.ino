const byte ROWS = 4;
const byte COLS = 4;

const byte rowPins[ROWS] = {6, 7, 8, 9};
const byte colPins[COLS] = {5, 4, 3, 2};

const char keyLayout[ROWS][COLS] = {
	{'1', '2', '3', '4'},
	{'q', 'w', 'e', 'r'},
	{'a', 's', 'd', 'f'},
	{'z', 'x', 'c', 'v'}
};

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	char customKey;
	if(customKey)
	{
		Serial.println(customKey);
	}
}
