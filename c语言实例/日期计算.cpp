/********** Begin **********/
#include <stdio.h>

int main() {
	int a = 92, b = 1;
	char c = '+';
	double ans;
//	scanf("%d %d", &a, &b);
//	scanf("%c", &c);
	if (c = '+')
		ans = a + b;
	if (c = '-')
		ans = a - b;
	if (c = '*')
		ans = a * b;
	if (c = '/') {
		if (b == 0)
			return -1;
		if (b != 0)
			ans = a / b;
	}
	printf("%.1f", ans);
	return 0;
}
