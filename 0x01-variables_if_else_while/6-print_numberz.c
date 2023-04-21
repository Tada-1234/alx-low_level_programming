#include <stdio.h>

/**
 * main - program starts here
 *
 * Description: print numbers 0 to 9
 * parameters: num_b holds the numbers to be displayed
 *
 * Return: Returns the value 0
 */

int main(void)
{
	int num_b, i;

	num_b = 0;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + num_b);
		num_b++;
	}
	putchar('\n');
	return (0);
}
