#include <stdio.h>

int main()
{
	double num;

	printf("Please enter kilometers: ");
	scanf("%lf", &num);

	printf("%.1f is equal %.1f miles.", num, num / 1.609);

	return 0;
}