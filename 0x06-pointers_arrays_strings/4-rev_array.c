# include "main.h"

/**
 *  reverse_array - reverses elements in an array
 *  @a: array
 *  @n: elements of array to be reversed
 *  Return: returns void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int tmp;

	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}

}
