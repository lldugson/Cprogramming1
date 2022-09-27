#include <stdio.h>

int main(void)
{
	int i, k;

	for (i = 0; i < 5; i++)
	{
		for (k = 4; k > i; k--)
		{
			printf(" ");
		}

		for (k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}