#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - This function prints the last digit of the input
 * @x: holds int
 *
 * Return: return value of the last digit
 */
int print_last_digit(int x)
{
	int y, z;

	y = abs(x);
	z = y % 10;
	_putchar(z);
	return (z);
}
