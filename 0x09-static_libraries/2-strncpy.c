#include "main.h"
#include <string.h>
/**
 * _strncpy - copies the most n of src to dest
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bits of src
 *
 * Return: returns the char after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
