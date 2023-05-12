#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 *
 * @argc: holds the size of array
 * @argv: the array of arguments
 *
 * Return: returns 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;

	i = --argc;
	printf("%d\n", i);
	return (0);
}
