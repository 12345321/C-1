#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("����1: ");
	scanf("%d", &num1);
	printf("����2: ");
	scanf("%d", &num2);

	printf("Input two integers: %d %d \n", num1, num2);
	printf("%d & %d = %d \n", num1, num2, num1 & num2);
	printf("%d | %d = %d \n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d \n", num1, num2, num1 ^ num2);
}