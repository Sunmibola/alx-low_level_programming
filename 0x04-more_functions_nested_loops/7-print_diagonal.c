#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}

}
