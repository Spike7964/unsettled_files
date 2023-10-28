#include <stdio.h>

int main() {

	int num;
	scanf("%d", &num);
	int x = 2;
	for (x = 2; x <= num; x++) {



		int i = 2;
		int Isprime = 1;
		for (i = 2; i < x; i++) {
			if (x % i == 0) {
				Isprime = 0;
				break;
			}
		}
		if (Isprime == 1) {
			printf("%d ", x);
		}
	}
	printf("\n");
	return 0;
}
