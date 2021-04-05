#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(){
    double first, second;
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    printf("The sum of first and second: %d\n", add(first, second));
    printf("The difference of first and second: %d\n", subs(first, second));
    printf("The product of first and second: %d\n", prod(first, second));
    printf("The quotient of first and second: %d\n", divid(first, second));
		
	return 0;
}