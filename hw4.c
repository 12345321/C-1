#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, a, prm = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (a = 1; a <= num; a++)
	{
		if (num % a == 0)
			prm++;
	}

	if (prm == 2)
		printf("It is a prime number.");
	else
		printf("It is not a prime number.");

	return 0;
}