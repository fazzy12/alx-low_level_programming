#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
