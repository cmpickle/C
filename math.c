#include <stdio.h>
#include <math.h>

int main()
{
	float num = 2;

	printf("The square root of %f is: %f\n", num, sqrt(num));

	float power = 8.0;

	printf("%f the the power of %f is: %f\n", num, power, pow(num, power));

	return 0;
}