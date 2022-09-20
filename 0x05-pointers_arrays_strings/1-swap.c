# include "main.h"
/**
 * swap_int - swaps values of integer
 * @a:integer to be swapped
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)

{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
