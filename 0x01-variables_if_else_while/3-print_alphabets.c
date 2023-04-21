#include <stdio.h>

/**
 * main - program starts here
 *
 * Description: print alphabet first in lower case then upper case
 * parameters: lower_alpha, upper_alpha
 *
 * Return: returns the value 0
 */

int main(void)
{
	char lower_alpha, upper_alpha;
	int i;

	lower_alpha = 'a';
	upper_alpha = 'A';

	for (i = 0; i < 52; i++)
	{
		if (i < 26)
		{
			putchar(lower_alpha++);
		}
		else
		{
			putchar(upper_alpha++);
		}
	}
	putchar('\n');
	return (0);
}
