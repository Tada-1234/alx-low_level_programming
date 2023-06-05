#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - function starts here
 * @argc: number of inputs
 * @argv: array of inputs
 *
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int i, j, result;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	j = atoi(argv[3]);
	i = atoi(argv[1]);

	oper = get_op_func(argv[2]);
	if ((*argv[2] == '/' || *argv[2] == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = oper(i, j);
	printf("%d\n", result);
	return (0);
}
