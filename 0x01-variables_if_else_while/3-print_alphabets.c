#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*print lowercase alphabets and upper case alphabets */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
