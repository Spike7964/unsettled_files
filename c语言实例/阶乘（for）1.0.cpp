#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int i = 1;
	int fact = 1;

	for (i = 1; i <= num; i++) {
		fact *= i;
	}
	printf("%d\n", fact);

}