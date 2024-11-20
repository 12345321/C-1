#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convChar(char str[])
{
	int i;
	const int diff = 'a' - 'A';

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
	}
}

int main(void)
{
	char str[50];
	
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	convChar(str);
	printf("Output> %s", str);

	return 0;
}