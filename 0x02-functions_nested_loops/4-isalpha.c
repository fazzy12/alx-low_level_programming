#include "main.h"

/**
 *_isalpha - this checks for alphabet characters
 *
 * @c: character to check
 *
 *Return: 1  if lower or uppercase, 0 if its not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
