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
	int thirdNum;

	for (thirdNum = '0'; thirdNum <= '9'; thirdNum++)
	{
		for (secondNum = (thirdNum + 1); secondNum <= '9'; secondNum++)
		{

			for (firstNum = (secondNum + 1); firstNum <= '9'; firstNum++)
			{

				putchar(thirdNum);
				putchar(secondNum);
				putchar(firstNum);

				if (thirdNum != '7' || secondNum != '8' || firstNum != '9')
				{
					putchar(',');
					putchar(' ');

				}
			}
		}

	}
	putchar('\n');

	return (0);
}
