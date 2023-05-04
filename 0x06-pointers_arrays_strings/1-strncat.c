#include "main.h"
#include <string.h>
/**
 * _strncat - appends 2 strings, is src >n the null is ignored
 * @n: it determines how many characters of src will be appended
 * @src: string to be appended
 * @dest: holds the destintion string
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
