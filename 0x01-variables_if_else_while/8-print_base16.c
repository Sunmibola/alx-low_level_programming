#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*print in base 16 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
