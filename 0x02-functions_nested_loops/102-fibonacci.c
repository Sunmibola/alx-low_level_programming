#include <stdlib.h>
# include <stdio.h>
/**
 * main - Entry point
 * print the first 50 fibonacci numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}

