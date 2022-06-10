#include  <stdio.h>

/**
 * main - the main prints fizzbuzz
 *
 * Return: Alaways retrun 0
 */

int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (n == 100)
			continue;
			printf(" ");
	}

	printf("\n");

	return (0);
}
