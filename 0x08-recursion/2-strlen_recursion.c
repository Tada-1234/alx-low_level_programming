#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - calculates the length of string
 * @s: The string to find length of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
