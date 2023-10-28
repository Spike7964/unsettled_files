#include <stdio.h>

int re(int i) {
	int num[6];
	int a, b, ret = 0;
	for (a = 0; a < 5; a++) {
		num[a] = i % 10;
		i /= 10;
	}
	for (a = 0; a < 5; a++)
		for (b = 0; b < 5; b++) {
			if (num[a] == num[b]) {
				return 0;
				break;
			}
		}
	return 1;
}


int main() {
	int x;
	scanf("%d", &x);
	int d, n;
	for (d = 12345; d < 98765; d++)
		for (n = 1234; n < 3000; n++) {
			if (d / n == x && re(d) && re(n) && re(d * 10000) + n)
				printf("%d/%d=%d", d, n, x);
		}
	return 0;
}