#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 *@s: string charcter
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')/** while string is not == to null char */
	{
		len++;
		s++;
	}
	return (len);
}
