#include <stdio.h>

int main() {
	char c = getchar();
	char ans;
	while ((c >= 'a')
	        && (c <= 'z') ) {
		char a0 = c & 1;
		char a1 = c & 2;
		char c_1 = 0 | (a0 << 1);
		c_1 = c_1 | (a1 >> 1);
		char a2 = c & 4;
		char a3 = c & 8;
		c_1 = c_1 | (a2 << 1);
		c_1 = c_1 | (a3 >> 1);
		char a4 = c & 16;
		char a5 = c & 32;
		c_1 = c_1 | (a4 << 1);
		c_1 = c_1 | (a5 >> 1);
		if ((c >> 6) == 0x01) {
			char t_67 = c & 192;
			char t_5 = (c << 2) >> 3;
			ans = a5 | t_67 | t_5;

		} else
			ans = c_1;
		printf("%c", ans);
	}
	return 0;
}