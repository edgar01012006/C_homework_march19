#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int count = 0;

	printf("enter 2 numbers\n");
	scanf("%d %d", &a, &b);

	if (a <= b)
	{
		for (; a <= b; ++a)
		{
			if (a % 5 == 0)
			{
				++count;
			}
		}
	}
	else
	{
		for (; a >= b; --a)
		{
			if (a % 5 == 0)
			{
				++count;
			}
		}
	}
	
	printf("count equals to = %d\n", count);
	return 0;
}