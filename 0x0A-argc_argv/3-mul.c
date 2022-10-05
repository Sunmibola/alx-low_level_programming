#include<stdio.h>
#include<stdlib.h>
/**
* main - multiplies integers
* @argc: argument counts
* @argv: argument
* Return: 0
*/

intmain(int argc, char **argv)
{
	int i, j;

	if (argc < 3)

	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}

