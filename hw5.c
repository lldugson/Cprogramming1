#include <stdio.h>

void binaryy(int i)
{
	if (i < 1)
		return;
	binaryy(i / 2);
	printf("%d", i % 2);
}

int main(void)
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	binaryy(num);

	return 0;
}