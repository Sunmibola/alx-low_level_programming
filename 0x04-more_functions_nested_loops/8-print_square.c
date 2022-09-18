#include "main.h"

/**
 * print_square - prints a square using #
 * @n: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	goto END;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			_putchar('#');
		_putchar('\n');
	}
END:;
}
