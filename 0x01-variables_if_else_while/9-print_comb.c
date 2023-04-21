#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all single digit numbers followed by a space & ,
 * parameters: com_spac holds comma and space combo
 *
 * Return: returns the value 0
 */

int main(void)
{
	int numb, i;

	numb = 0;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + numb);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}
	putchar('\n');
	return (0);
}
