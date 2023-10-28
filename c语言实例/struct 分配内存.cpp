#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *name;
	int age;
	float score;
}  stu;

int main() {
	stu Stul;
	Stul.name = (char *)malloc(2 * sizeof(char));

	scanf("%s %d %f", Stul.name, &Stul.age, &Stul.score);
	printf("%s %d %f", Stul.name, Stul.age, Stul.score);
	free(Stul.name);
	return 0;
}