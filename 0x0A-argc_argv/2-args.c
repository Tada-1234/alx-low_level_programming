#include <stdio.h>
#include "main.h"
/**
 * main - prints the arguments
 * @argc: holds the size of array
 * @argv: the array of arguments
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
