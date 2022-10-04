# include "main.h"
/**
 * _strlen - prints lenght of a string
 * @s: strings to count
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
