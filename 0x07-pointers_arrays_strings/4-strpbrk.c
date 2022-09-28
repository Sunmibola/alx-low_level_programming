#include "main.h"

/**
 * _strpbrk - searches for the first occurrence ofa no of byte
 * @accept: string to be checked for byte
 * @s: no of bytes in string s
 * Return: returns a new value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

