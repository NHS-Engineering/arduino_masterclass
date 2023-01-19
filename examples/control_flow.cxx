void setup() {
	pinMode(LED_BUILTIN, OUTPUT);

	int x = 0;

	// while x is less than 5, keep adding 1 until it's no longer less than 5
	while (x < 5) {
		x += 1;
	}

	if (x == 5) {
		// x is now 5
		digitalWrite(LED_BUILTIN, HIGH);
	} else {
		// we should never get here, but we could be if x is somehow not 5
		digitalWrite(LED_BUILTIN, LOW);
	}
}
