#include <stdio.h>

int main(void)
{
	int arr[5], i;

	printf("Please input five integets: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	printf("Odd number: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}

	printf("\n");

	printf("Even numbers: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}

	return 0;
}