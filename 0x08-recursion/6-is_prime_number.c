#include "main.h"
#include <stdio.h>
int _prime(int n, int i);
/**
 * is_prime_number - determines if its a prine number
 * @n: number to check
 *
 * Return: if true 1, false 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (_prime(n, 2));
}
/**
 * _prime - finds the prime number
 * @n: number
 * @i: iteration
 *
 * Return: if true 1, false 0
 */
int _prime(int n, int i)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
