#include <stdio.h>
/**
 * main-  prints arguments it recieves
 * @argc: argument count
 * @argv: argument reciebved
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
