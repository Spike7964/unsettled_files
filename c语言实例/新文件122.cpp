#include <stdio.h>

int main() {
	int x = 0, i = 0;
	int cnt[10];
	for (i = 0; i < 10; i++) {
		cnt[i] = 0;
	}
	while (x != -1) {
		scanf("%d", &x);
		if (x >= 0 && x <= 9) {
			cnt[x]++;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%dÊäÈë%d¸ö\n", i, cnt[i]);
	}
	return 0;
}