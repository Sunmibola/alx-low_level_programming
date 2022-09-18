# include "main.h"

/**
 * more_numbers - prints 0-14 in ten places
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
