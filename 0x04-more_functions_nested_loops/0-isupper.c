#include "main.h"

/**
 *_isupper - checks for uppercase character
 *
 *@c: character to be checked
 *
 *Return: returns 1 if c is uppercase returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
