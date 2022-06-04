#include <stdio.h>
/**
 *main - print Base 16 in lower case
 *
 * Return: 0 (success)
 */

int main(void)
{

	int num = '0';
	int alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
