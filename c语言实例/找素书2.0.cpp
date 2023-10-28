#include <stdio.h>

int isPrime(int a) {
	int i, ret = 1;
	for (i = 2; 2 * i < a; i++) {
		if (a % i == 0) {
			ret = 0;
			break;
		}
		return ret;
	}
}

int main() {
	int x, i, n;
	scanf("%d", &x);
	int list[500] = {1,};


	for (i = 1; i < x; i++) {
		if (list[i] == 0) {
			if (isPrime(i)) {
				for (n = 1; i * n <= x; n++)
					list[(i + 1) * n] = 1;
			}
		}
	}
	for (i = 1; i <= x; i++)
		printf("%d    %d\n", i, list[i + 1]);


}








