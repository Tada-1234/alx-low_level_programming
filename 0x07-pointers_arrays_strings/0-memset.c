#include <string.h>
#include "main.h"
/**
 * _memset - function fills the first n bytes of the add. pointed to by b
 * @s: the address of memory to print
 * @b: the constant byte to replace the first n bytes
 * @n: number of bytes to be replaced
 *
 * Return: Returns Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
