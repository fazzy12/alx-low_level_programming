#include <stdio.h>
/**
 * main - print all combination of singles
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int sing_digi = '0';

	for (sing_digi = '0'; sing_digi <= '9'; sing_digi++)
	{
		putchar(sing_digi);
		if (sing_digi != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

