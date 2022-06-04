#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	char _alpha = 'z';

	do {
		putchar(_alpha);
		_alpha--;

	} while (_alpha >= 'a');
	putchar('\n');

	return (0);
}
