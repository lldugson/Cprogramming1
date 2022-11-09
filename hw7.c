#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* arp1 = &arr1[0];
	int* arp2 = &arr2[0];
	int i, j;

	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	printf("\n\n");

	for (i = 0; i < 6; i++)
	{
		j = *arp1;
		*arp1 = *arp2;
		*arp2 = j;
		arp1++;
		arp2++;
	}

	printf("after swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	return 0;
}