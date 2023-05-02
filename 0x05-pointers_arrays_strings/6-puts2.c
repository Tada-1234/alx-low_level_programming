#include "main.h"
/**
 * puts2 - prints out everyother number
 * @str: holds the address of the string
 *
 * Return: has no return
 */
void puts2(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
