#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	printf("The Size of a char: %zu byte(s)\n", sizeof(char));
	printf("The Size of an int: %zu byte(s)\n", sizeof(int));
	printf("The Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("The Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("The Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
