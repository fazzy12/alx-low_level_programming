#include "main.h"

/**
 * print_triangle - prints a triangles
 * @size: size of traiangle
 */

void print_triangle(int size)
{
	int hash_sign, index;

	if (size > 0)
	{
		for (hash_sign = 1; hash_sign <= size;  hash_sign++)
		{
			for (index = size - hash_sign; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash_sign; index++)
				_putchar('#');

			if (hash_sign == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
