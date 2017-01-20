#include <stdio.h>

int main() {
	char *bar = "Cameron Pickle";
	char foo[] = "tedcowan";
	char *test = "test";

	int i = 0;
	printf("%s\n", bar);
	while(*(test+i)) {
		printf("%c", *(test+i));
		++i;
	}
	printf("\n");
	printf("%s\n", foo);
	return 0;
}
