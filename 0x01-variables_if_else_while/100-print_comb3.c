#include <stdio.h>

/**
 * main - print combinations of numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int firstNum = '0';
	int secondNum = '1';

	while (secondNum <= '9')
	{
		for (firstNum = (secondNum + 1); firstNum <= '9'; firstNum++)
		{
			putchar(firstNum);
			putchar(secondNum);

			if (secondNum != '8' || firstNum != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		secondNum++;
	}
	putchar('\n');

	return (0);
}
