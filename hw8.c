#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double StanDeviation(double arr[])
{
	int i;
	double sum = 0, mean, var = 0;
	double stdev = 0;
	for (i = 0; i < 5; i++)
		sum += arr[i];
	mean = sum / 5;

	for (i = 0; i < 5; i++)
	{
		var += pow((arr[i] - mean), 2);
	}
	var = var / 5;
	stdev = sqrt(var);
	return stdev;
}

int main(void)
{
	double arr[5];
	int i;
	printf("Enter 5 real numbers: ");
	for( i = 0; i<5; i++)
		scanf("%lf", &arr[i]);
	printf("Standard Deviation = %.3f", StanDeviation(arr));
	return 0;
}