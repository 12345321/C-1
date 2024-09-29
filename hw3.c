#include <stdio.h>

int main(void)
{
	int i, s, j;

	for (i = 0; i < 5; i++)
	{
		for (s = i; s < 4; s++)
			printf(" ");
		
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}