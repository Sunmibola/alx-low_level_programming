# include "main.h"
/**
 *  _strcmp - compares two strings
 *  @s1: string 1
 *  @s2: string 2
 *  Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int Z;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	Z = s1[i] - s2[i];

	return (Z);
}
