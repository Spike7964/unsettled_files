#include <stdio.h>

void minmax(int a[], int len, int *min, int *max) {
	int i;
	*min = *max = a[0];
	for (i = 0; i < len; i++) {
		if (a[i] > *max)
			*max = a[i];
		if (a[i] < *min)
			*min = a[i];
	}
}

int main() {
	int min, max;
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 111, 1, 1, 1, 111111, -111};
	minmax(a, sizeof(a) / sizeof(int), &min, &max);
	printf("min=%d\nmax=%d", min, max);
	return 0;
}