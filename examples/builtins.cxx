/* LED_BUILTIN is a builtin integer constant that
correspondsto the LED on the Arduino itself */
int led = LED_BUILTIN;

// assume this is hooked up to a button with a pull-down resistor
int button_pin = 9;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(button_pin, INPUT);
}

// blinks if the button is set to HIGH
void loop() {
    int button_state = digitalRead(button_pin);

    digitalWrite(led, button_state);
    delay(100);
    digitalWrite(led, LOW);

    delay(500);
}