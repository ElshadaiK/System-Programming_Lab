#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	while( (i < 5) && (j < 5) )
	{
		printf("i: %d\t", i++);
		printf("j: %d\n", ++j);
	}
	printf("At the end they have both equal values:\ni: %d\tj: %d\n", i, j);
	return 0;
}
