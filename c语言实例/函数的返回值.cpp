#include <stdio.h>

int max(int a, int b) {
	int ret;
	if (a > b) {
		ret = a;
	} else {
		ret = b;
	}
	return  ret;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", max(x, y));
}
