#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* three digits succession */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x < '9'; x++)
	{
		for (x = y + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				if (x != y && x != z && y != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x == '7' && y == '8' && z == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
