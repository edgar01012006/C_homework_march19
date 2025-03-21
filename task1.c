#include <stdio.h>

int main()
{
	int num = 0;
	while (num <= 10)
	{
		printf("%d ", num);
		++num;
	}

	printf("\n");
	num = 0;

	do
	{
		printf("%d ", num);
		++num;
	} while (num <= 10);

	printf("\n");

	for (int i = 0; i <= 10; ++i)
	{
		printf("%d ", i);
	}

	printf("\nreverse order\n");
	num = 10;

	while (num >= 0)
	{
		printf("%d ", num);
		--num;
	}

	printf("\n");
	num = 10;

	do
	{
		printf("%d ", num);
		--num;
	} while (num >= 0);

	printf("\n");

	for (int i = 10; i >= 0; --i)
	{
		printf("%d ", i);
	}
	return 0;
}