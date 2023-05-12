#include <stdio.h>
#include "main.h"
/**
 * main - writes the program name
 * @argc: holds the size of array
 * @argv: the array of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
