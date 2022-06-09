#include <stdio.h>

/**
 *main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count;
	int count_to = 50;
	long a = 1;
	long b = 2;

	for (count = 1; count <= (count_to / 2); count++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (count_to % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
