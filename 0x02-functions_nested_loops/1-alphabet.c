#include "main.h"
/**
 * print_alphabet - prints in lowercase followed by a line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
