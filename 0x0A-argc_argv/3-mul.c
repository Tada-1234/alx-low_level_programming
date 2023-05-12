#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies 2 input numbers
 * @argc: holds the size of array
 * @argv: the array of arguments
 *
 * Return: returns 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
}
