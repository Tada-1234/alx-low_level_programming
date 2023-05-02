#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: holds the address of a string
 *
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
	{
		for (j = (len - 1) / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
