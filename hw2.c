#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double dist;
	double mile;

	printf("Please enter kilometers: ");
	scanf("%lf", &dist);
	mile = dist / 1.609;

	printf("%.1f km is equal to %.1f miles \n", dist, mile);
	return 0;
}