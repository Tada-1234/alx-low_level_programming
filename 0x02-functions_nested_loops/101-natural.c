#include <stdio.h>
/**
 * main  - This function is the entry point
 * description: prints the sum of multiples of 3 less than 1024
 * no parameters
 *
 * Return: returns 0
 */
int main(void)
{
	int i, x;

	x = 0;
	for (i = 1; i < 1024; i++)
	{
		int y = i % 3;
		int z = i % 5;

		if (y == 0 || z == 0)
		{
			x += i;
		}
	}
	printf("%d\n", x);
	return (0);
}
