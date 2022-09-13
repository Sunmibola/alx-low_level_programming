#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This prints alphabets in lowercase
 */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
