#include <stdio.h>

int main() {
	int i;
	int ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
	int *p = &ac[0];
	for (i = 0; *p != -1; p++) {
		printf("  %d  ", *p);
	}
	return 0;
}