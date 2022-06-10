#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: print numbers of lines
 */
void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				_putchar(' ');
			_putchar('\\');

			if (length == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
