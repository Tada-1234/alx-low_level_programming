#include "main.h"
#include <string.h>
/**
 * _strcpy - copy the string pointed by src into dest
 * @dest: destination of string
 * @src: string to be copied
 *
 * Return: returns a char
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
