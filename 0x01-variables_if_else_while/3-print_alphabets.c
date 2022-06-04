#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char small_alpha = 'a';
	char big_alpha = 'A';

	while (small_alpha <= 'z')
	{
		putchar(small_alpha);
		small_alpha++;
	}
	while (big_alpha <= 'Z')
	{
		putchar(big_alpha);
		big_alpha++;
	}
	putchar('\n');

	return (0);
}

