#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet backwards
 * parameters: back_alpha holds the alphabet value
 *
 * Return: returns the value 0
 */

int main(void)
{
	char back_alpha;
	int i;

	back_alpha = 'z';
	for (i = 0; i < 26; i++)
	{
		putchar(back_alpha--);
	}
	putchar('\n');
	return (0);
}
