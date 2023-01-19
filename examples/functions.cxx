// defined in the form "<return_type> <name>(<type1> <arg1>, <type2> <arg2>, ...) { ... }"
int square(int n) {
	// return keyword brings the value back to the caller
	return n * n;
}

void setup() {
	// called in the form "<name>(<arg1>, <arg2>, ...)"
	int x = square(5);

	// x is now equal to 25
}
