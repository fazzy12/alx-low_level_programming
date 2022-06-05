#include <stdio.h>

/**
 * main - print combinations of numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int firstNum;
	int secondNum;

	for (secondNum = '0'; secondNum <= '9'; secondNum++)
	{
		for (firstNum = (secondNum + 1); firstNum <= '9'; firstNum++)
		{
			putchar(secondNum);
			putchar(firstNum);

			if (secondNum != '8' || firstNum != '9')/*insert comma & space*/
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');

	return (0);
}
