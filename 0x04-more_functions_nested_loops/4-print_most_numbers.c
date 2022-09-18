#include "main.h"

/**
 * print_most_numbers -print all digit except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || 1 == '4'))
			_putchar('0' + i);
	}

	_putchar('\n');
}

