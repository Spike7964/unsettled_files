//Ë®ÏÉ»¨Êý

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 1;
	int k = 1;
	for (i = 1; i < n; i++) {
		k = k * 10;
	}
	int x = (k * 10) - 1;
	int y, z, j, time = 0;
	for (; k <= x; k++) {
		int sum = 0, he = 1;
		z = k;
		for (j = 1; j <= n; j++) {
			y = z % 10;
			z = z / 10;
			for (time = 0; time < n; time++) {
				he = he * y;
			}
			time = 0;
			sum = sum + he;
		}
		he = 1;
		if (sum == k) {
			printf("%d\n", sum);
			sum = 0;
		} else {
			sum = 0;
		}
	}
	return 0;

}