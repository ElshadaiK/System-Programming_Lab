#include <stdio.h>


void main() {
 	int  x = 0x66;
	int  y = 0x39;
	printf("%i & %i = %i\n",x, y, x&y);
	printf("%i | %i = %i\n",x, y, x|y);
	printf("~%i | ~%i = %i\n",x, y, ~x | ~y);
	printf("%i &  !%i = %i\n",x, y, x & !y);
	printf("%i && %i = %i\n",x, y, x && y);
	printf("%i || %i = %i\n",x, y, x || y);
	printf("!%i || !%i = %i\n",x, y, !x || !y);
	printf("%i && ~%i = %i\n",x, y, x && ~y);
}
