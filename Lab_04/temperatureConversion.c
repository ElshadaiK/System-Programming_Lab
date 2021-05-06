#include <stdio.h>

void main() {
	printf("Please choose from the menu below for temprature conversion (1/2).\n");
	printf("1. Celsius to Farenheit\n");
	printf("2. Farenheit to Celsius\n");
	int choice, degree;
	scanf("%i", &choice);
	switch (choice) {
		case 1:
			printf("Please enter the number which is in degree Celsius: ");
			scanf("%i", &degree);
			printf("The temperature %i degree Celsius to Farenheit is: %i degree Farenheit\n", degree, ((degree * 9)/5 + 32));
			break;
		case 2:
			printf("Please enter the number which is in degree Farenheit: ");
			scanf("%i", &degree);
			printf("The temprature %i degree Farenheit to Celsius is: %i degree Celsius\n", degree, ((degree - 32) * 5 / 9));
			break;
		default:
			printf("Please enter a valid choice (either 1 or 2)");
	}
}
