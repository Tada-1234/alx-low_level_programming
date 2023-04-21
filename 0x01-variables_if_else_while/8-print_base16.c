#include <stdio.h>

/**
 * main - program starts here
 *
 * Description: displays hexadecimal numbers
 * parameters:  hex_dec holds the hex number
 *
 * Return: returns the value 0
 */

int main(void)
{
	int i;
	char hex_dec, lower_alpha;

	lower_alpha = 'a';
	hex_dec = '0';

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(hex_dec++);
		}
		else
		{
			putchar(lower_alpha++);
		}
	}
	putchar('\n');
	return (0);
}
