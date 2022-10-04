# include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination string
 * @src: source string
 * @n: integer n
 * Return: returns destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
