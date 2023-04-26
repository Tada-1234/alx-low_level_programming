#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this function print numbers up to 98 from current
 * @n: signed integer
 *
 * Return: no return
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
