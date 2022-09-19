#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: returns void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				if (j < size + 1 - i)
					_putchar(' ');
				else
					_putchar('#');
			_putchar('\n');
		}
	}
}
