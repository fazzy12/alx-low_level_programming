#include "main.h"

/**
 * _strncat - concatenates two strings and
 * src does not need to be null-terminated
 *  if it contains n or more bytes
 *
 *  @dest: contains strings
 *  @src:  contains strings
 *  @n:    contains integers
 *
 *  Return: rturns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, dest_length = 0;

	while (dest[count] != '\0')
		count++;

	while (src[dest_length] != src[n])
	{
		dest[count] = src[dest_length];
		count++;
		dest_length++;
	}
	dest[count] = '\0';

	return (dest);
}
