#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char name[20];
	char nameC[50];
	int pop;
}cityID;

int main(void)
{
	cityID arr[3];
	int i;

	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); 
		scanf(" %[^\n]s", arr[i].name);
		printf("Country> "); 
		scanf(" %[^\n]s", arr[i].nameC);
		printf("Population> "); 
		scanf("%d", &arr[i].pop);
		printf("\n");
	}

	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i + 1, arr[i].name, arr[i].nameC, arr[i].pop);
	}

	return 0;
}