#include "main.h"
#include <string.h>
/**
 * _strcmp - compares 2 strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: returns a value >, <, = 0 depending on comparison of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	n = strcmp(s1, s2);
	return (n);
}
