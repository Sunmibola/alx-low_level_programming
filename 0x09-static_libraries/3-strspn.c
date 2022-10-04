#include "main.h"
#include "stdio.h"
/**
 * _strspn - length of substring
 * @accept: accepted no of bytes
 * @s: srting to be checked
 * Return: return unsigned values
 */
unsigned int _strspn(char *s, char *accept)
{

	int a;
	int b;
	unsigned int result = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				result++;
				break;
			}
		}
		if (s[b] == '\0')
			return (result);
	}
	return (result);
}

