// declare x as an integer that is 0
int x = 0;

// required stuff for printing to console, ignore it for now
void setup() {
	Serial.begin(9600);
}

// adds 1 to x forever (will overflow)
void loop() {
	// <v> += <n> is shorthand for <v> = <v> + <n>
	x += 1;

	// prints the value of x to the console
	Serial.print(x);
}
