#include <stdio.h>

int main()
{
	int num = 0;
	int factorial = 1;

	printf("enter a number pls\n");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		factorial *= i;
	}

	printf("factorial equals to = %d\n", factorial);

	return 0;
}