#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int pascal(int x, int y) {
	if(x==0)
		return 1;
	if(x==y) 
		return 1;
	return pascal(x, y-1)+pascal(x-1, y-1);
}

int main(int argc, char *argv[])
{
	//char *format = "%6d ";
	int col = 22;
	if(argc > 1)
		col = atoi(argv[1]);

	//if(atoi(argv[1]) > 18)
		//strcpy(format, "%10d ");

	int j;
	for(j=0; j<col; ++j) {
		int i;
		for(i=0; i<=j; ++i) {
			if(i==0)
			{
				int space;
				for(space = 0; space<col*2/2-j; ++space)
					printf("   ");
			}
			printf("%6d ", pascal(i,j));
		}
		printf("\n");
	}
	return 0;
}