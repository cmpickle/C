#include <stdio.h>

int main()
{
	char str[15];

	printf("What do you want? "); //can also use puts()
	fgets(str, 15, stdin); //can also use scanf(), scanf only reads until whitespace
	/* scanf(String formatString, variable inputAddress)
	 * make sure to put the format string in the first parameter
	 * the second parameter should be the address of the variable 
	 * you want to input into unless it is a String(char array) 
	 * or array, then just use the variable not it's address.
	 */
	printf("%s\n", str);

	return 0;
}