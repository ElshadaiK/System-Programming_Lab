#include <stdio.h>
#include <string.h>

void stringConcat(char *str1,char *str2)
{
	int i;
	int j = strlen(str2);
	//int j = (int)malloc(strlen(str2));
	
	while (str2[i] != '\0') {
		str1[i+j] = str2[i];
		i++;
	}
	str1[i+j] = '\0';
}


void main()
{
    char str1[] = "Aymen";
    char str2[] = "Moh";

    stringConcat(str1, str2);
    printf("Concatinated String: %s", str1);
}
