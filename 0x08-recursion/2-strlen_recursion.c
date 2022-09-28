#include "main.h"
/**
 * _strlen_recursion - returns the lenghth of a string
 * @s: string s
 * Return: return void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
