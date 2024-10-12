#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binaryscale(int num)
{
	if (num == 1 || num == 0)
		printf("%d", num);
	else
	{
		binaryscale(num / 2);
		printf("%d", num % 2);
	}
	
}

int main(void)
{
	int num;
	printf("Á¤¼ö: ");
	scanf("%d", &num);
	binaryscale(num);
	return 0;
}