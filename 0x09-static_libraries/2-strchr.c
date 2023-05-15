#include "main.h"
#include <string.h>
/**
 * _strchr - returns a pointer to the first occurance of c in string s
 * @s: string to look through
 * @c: character to look for
 *
 * Return: returns a pointer to the character c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
