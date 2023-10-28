#include <stdio.h>
void sum(int begin, int end);

int main() {
	sum(0, 10);
	sum(10, 35);
	sum(35, 50);
	return 0;
}

void sum(int begin, int end) {
	int sum = 0;
	for (; begin <= end; begin++) {
		sum = sum + begin;
	}
	printf("%d\n", sum);
}