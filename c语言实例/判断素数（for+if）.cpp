#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int IsPrime = 1;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			IsPrime = 0;
			break;
		}
	}
	if (IsPrime == 1) {
		printf("是素数");
	} else {
		printf("不是素数");
	}



}
