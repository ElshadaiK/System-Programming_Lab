#include <stdio.h>
#include <string.h>

void stringConcat(char *str1,char *str2)
{
	int i = 0;
	int j = strlen(str1);
	
	while (str2[i] != '\0') {
		str1[i+j] = str2[i];
		i++;
	}
	str1[i+j] = '\0';
}


void main()
{
    char str1[100] = "Elsh ";
    char str2[10] = "Tegegn";

    stringConcat(str1, str2);
    printf("Concatinated String: %s\n", str1);
}
