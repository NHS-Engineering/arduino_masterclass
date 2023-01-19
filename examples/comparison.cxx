int x = 0;
int y = 3;

void setup() {
	// should be true
	bool is_zero = x == 0;

	// should be false
	bool is_one = x == 1;

	// should be false
	bool z1 = x > y;

	// should be true
	bool z2 = x < y;
}
