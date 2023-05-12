#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - calculates the sum of the arguments and prints it
 * @argc: holds the size of array
 * @argv: the array of arguments
 *
 * Return: returns 0 if success and 1 if not
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *ptr = argv[i];
			int length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					exit(EXIT_FAILURE);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
