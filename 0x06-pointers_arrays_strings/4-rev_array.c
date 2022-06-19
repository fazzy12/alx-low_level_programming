#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, count = 0;
	int fin = n - 1;

	while (count < fin)
	{

		tmp = *(a + count);
		*(a + count) = *(a + fin);
		*(a + fin) = tmp;

		count++, fin--;
	}

}
