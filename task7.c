#include <stdio.h>

int main()
{
	int num = 0;
	int reverse_num = 0;
	int num_last_digit = 0;

	printf("enter a number pls\n");
	scanf("%d", &num);

	while (num != 0)
	{
		num_last_digit = num % 10;
		reverse_num = num_last_digit + (reverse_num * 10);
		num /= 10;
	}

	printf("numbers in order ");

	while (reverse_num != 0)
	{
		num_last_digit = reverse_num % 10;
		printf("%d ", num_last_digit);
		reverse_num /= 10;
	}

	return 0;
}