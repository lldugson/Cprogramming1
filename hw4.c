#include <stdio.h>

int main(void)
{
	int num, i;

	printf("Pleass enter a number: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("It is a prime number.");
		break;
	case 2:
		printf("It is a prime number.");
		break;
	default:
		for (i = 1; i < num; i++)
		{
			if (num % i > 0)
			{
				printf("It is a prime number.");
				break;
			}
			else
			{
				printf("It is not a prime number.");
				break;
			}
		}
	}

	return 0;
}