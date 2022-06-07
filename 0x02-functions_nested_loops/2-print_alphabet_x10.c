#include "main.h"

/**
 * print_alphabet_x10 - print lowercase ten times
 *
 *
 * Return 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	char newLine;

	for (newLine = 0; newLine <= 9; newLine++)/*print liness*/
	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)/*prints alphabets*/
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

