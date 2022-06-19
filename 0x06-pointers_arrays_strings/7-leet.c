#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * @s: string to manipulate
 */

char *leet(char *str)
{
	int ind1 = 0, ind2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[ind1])
	{
		for (ind2 = 0; ind2 <= 7; ind2++)
		{
			if (str[ind1] == leet[ind2] || str[ind1] - 32 == leet[ind2])
				str[ind1] = ind2 + '0';
		}

		ind1++;
	}

	return (str);
}
