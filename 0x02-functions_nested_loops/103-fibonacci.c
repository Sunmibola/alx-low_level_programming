#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tSum = tSum + y;
		}
		sum = x + y;
		y = sum;
	}
	printf("%ld\n", tSum);

	return (0);
}


