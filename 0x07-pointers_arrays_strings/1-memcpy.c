#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from src to dest
 * @src: the address of memory to copy
 * @n: the size of the memory to copy
 * @dest: the address of memory to copy to
 *
 * Return: returns char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
