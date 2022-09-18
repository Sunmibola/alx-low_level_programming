#include "main.h"
/**
 * _isupper - checks if a character is in uppercase
 * @c: what is to be tested
 * Return: 1 if uppercase and 0 if otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

