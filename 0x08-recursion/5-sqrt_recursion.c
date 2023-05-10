#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: int to find sqrt of
 *
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - find the square root
 * @n: int to find square root of
 * @i: iteration
 *
 * Return: int
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	else if (sqr == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
