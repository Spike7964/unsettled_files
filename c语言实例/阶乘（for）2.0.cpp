#include <stdio.h>

int main() {
	int num ;
	scanf("%d", &num);
	int fact = 1;
	for (; num > 0; num--) {
	fact *= num;
	}
	printf("%d", fact);
}