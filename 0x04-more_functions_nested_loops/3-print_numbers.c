#include "main.h"
#include <ctype.h>
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: none
 */
void print_numbers(void)
{
	int i;
	char c = '0';

	for (i = 0; i < 10; i++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
