#include <stdio.h>

int main() {
	int num = 3;
	int *ptr = &num;

	printf("the value of num is: %d\n", num);
	printf("the address of ptr is: %p\n", ptr);
	printf("the value at *ptr is %d\n", *ptr);
	++num;
	printf("++num\n");
	printf("if I increment num the the value of *ptr is: %d\n", *ptr);

	return 0;
}
