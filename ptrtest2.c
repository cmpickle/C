#include <stdio.h>

int main() {
	int salaries[20];

	int i;
	for(i = 0; i<20; ++i)
		salaries[i] = 100 + i;

	printf("%d\n", *(salaries+2));

	return 0;
}
