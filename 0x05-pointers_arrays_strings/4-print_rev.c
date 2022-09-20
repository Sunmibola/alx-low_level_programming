# include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character s to be printed
 * Return: return void
 *
 */

void print_rev(char *s)
{
	int length, last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	last = length - 1;
	for (; last >= 0; last--)

	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
