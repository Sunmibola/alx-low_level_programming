#include "main.h"

/**
 *  _islower - defnes if a character is lower case
 * @c: the character to check
 * Return: 1 if c is lowercase and 0 if uppercase
 */

int _islower(int c)
{
	char c;


	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
