#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	char _alpha = 'a';
	
	do{
		putchar(_alpha);
		_alpha++;

	}while (_alpha <= 'z');
	
	return (0);
}	
