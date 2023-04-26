#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the nine times table
 * no parameters
 *
 * Return: no return value
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x = 0 + (i * j);

			if (j < 9)
			{
				printf("%3d,", x);
			}
			else
			{
				printf("%3d", x);
			}
		}
		printf("\n");
	}
}
