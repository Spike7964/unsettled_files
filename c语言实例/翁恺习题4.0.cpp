#include <stdio.h>

int main() {
	int a;
	int cnt = 0;
	printf("请输入一个小于6的正整数\n");
	scanf("%d", &a);

	int i, j, k;

	for (i = a; i <= a + 3; i++) {

		for (j = a; j <= a + 3; j++) {

			for (k = a; k <= a + 3; k++) {
				if (i != j) {
					if (j != k) {
						if (i != k) {
							cnt++;
							printf("%d ", i * 100 + j * 10 + k);
							if (cnt == 6) {
								printf("\n");
								cnt = 0;
							}
						}
					}

				}
			}

		}




	}
	return 0;
}