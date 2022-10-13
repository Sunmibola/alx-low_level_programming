#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers @a and @b
 * @: a number
 * @b: another number
 *
 * Return: some of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of @a and @b
 * @a: a num
 * @b: another num
 *
 * Return: Difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @: a num
 * @b: anotheer num
 *
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides @a by @b
 * @a: a num
 * @b: another num
 *
 * Return  a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of @a divided by @b
 * @a: a num
 * @b: another num
 *
 * Return: remainder of a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
