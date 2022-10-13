#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array of integere
 * @size: no of elements
 * @cmp: pointer to the values
 * Return: integers
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
