#include <stdio.h>

int main() {
	double x;
	scanf("%d", &x);
	x *= 10.0;
	int five = 0;
	int two = 0;
	int one = 0;
	for (five = 0; x >= 5.0; five++) {
		x -= 5.0;
	}
	for (two = 0; x >= 2.0; two++) {
		x -= 2.0;
	}
	for (one = 0; x >= 1.0; one++) {
		x -= 1.0;
	}
	printf("��Ҫ%d��5ë��%d��2ë��%d��һë", five, two, one);
	return 0;
}