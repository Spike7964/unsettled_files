#include <stdio.h>

int main() {
	int i = 1;
	int n;
	scanf("%d", &n);
	double sum = 0.0;
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			sum += 1.0 / i;
		} else {
			sum -= 1.0 / i;
		}
	}
	printf("%f", sum);
	return 0;
}