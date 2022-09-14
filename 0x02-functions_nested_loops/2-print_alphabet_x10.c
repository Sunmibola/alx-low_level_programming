#include "main.h"

/**
 * print_alphabet_x10 - print 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
	_putchar('\n');
	}
}
