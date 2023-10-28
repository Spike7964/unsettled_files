#include <stdio.h>

int divide(int a, int b, int *result);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c;

	if (divide(a, b, &c)) {
		printf("%d/%d=%d", a, b, c);
	} else {
		printf("b shouldn't be 0!");
	}
	return 0;
}

int divide(int a, int b, int *result) {
	int ret = 1;
	if (b == 0)
		ret = 0;
	else {
		*result = a / b;
	}
	return ret;
}