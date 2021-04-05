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
    printf("The sum of %f and %f: %d\n", first, second, add(first, second));
    printf("The difference of %f and %f: %d\n", first, second, subs(first, second));
    printf("The product of %f and %f: %d\n", first, second, prod(first, second));
    if(second != 0){
        printf("The quotient of %f and %f: %d\n", first, second, divid(first, second));
	
    }
    else{
        printf("The quotient of %f and %f: Infinity\n", first, second);
	
    }
    	
	return 0;
}