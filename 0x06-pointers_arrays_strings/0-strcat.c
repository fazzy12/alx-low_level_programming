#include "main.h"

/**
 * _strcat - concatenates two strings and appends
 * src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: holds a string
 * @src:  holds a string
 *
 * Return: Alawys 0.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, dest_length = 0;

	while (dest[count] != '\0')
		count++;

	while (src[dest_length] != '\0')
	{
		dest[count]  = src[dest_length];
		count++;
		dest_length++;
	}
	dest[count] = '\0';

	return (dest);
}


