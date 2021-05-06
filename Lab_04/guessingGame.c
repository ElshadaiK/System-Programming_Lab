#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
int main() {
	int guess;
	printf("You have five granted guesses from 1-50\n");

	int x;
	/* srand(time(NULL)); */
	x = rand() % 51;
	for (int i = 0; i < 5; i++) {
		printf("Enter your guess: \n");
		scanf("%i", &guess);
		if (guess > x) {
			printf("Guess too High\n");
		}
		else if (guess < x) {
			printf("Guess too Low\n");
		}
		else {
			printf("You guessed on point. Beautiful!!\n");
			return 0;
		}
	}

	

        /* printf("x = %d\n", x);
	x = rand() % 50;
	printf("Now x = %d\n", x);
	x = rand() % 50;
	printf("Now x = %d\n", x); */
}
