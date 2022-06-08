#include "main.h"


/**
* times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int _num, _mult, _prod;

	for (_num = 0; _num <= 9; _num++)
	{
		_putchar('0');

		for (_mult = 1; _mult <= 9; _mult++)
		{
			_putchar(',');
			_putchar(' ');


			_prod = _num * _mult;

			if (_prod <= 9)
				_putchar(' ');

			else
				_putchar((_prod / 10) + '0');


			_putchar((_prod % 10) + '0');
		}
		_putchar('\n');
	}
}
