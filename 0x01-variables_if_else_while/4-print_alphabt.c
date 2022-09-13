#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*print all alphabet except q and e */
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char letter, e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (low != e && low != q)
			putchar(letter);
	}
	putchar('\n')

	return (0);
}
