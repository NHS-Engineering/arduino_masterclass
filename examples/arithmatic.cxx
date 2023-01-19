int x = 0;

// adds 1 to x forever
void loop() {
	// adds 1 to x and sets x as the new value
	x = x + 1;
	// if you want to get fancy, "x += 1;" is identical
	// or even fancier, "x++" is also the same
}

// remember x is an int, so it will eventually overflow
