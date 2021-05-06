#include <stdio.h>

int primeNumber(int num);
void main() {
	int number;
	printf("Enter an integer, give me the privilege to determine if its prime? ");
	scanf("%i", &number);
	if (primeNumber(number) == 0) {
		printf("%i is not a prime Number\n", number);
	}
	else {
		printf("%i is a prime Number\n", number); 
	}


}

int primeNumber(int num) {
	if (num == 1) return 0;

	for (int i = 2; i <= num/2; ++i){
		if (num % i == 0) return 0;
	}
	return 1;
}


