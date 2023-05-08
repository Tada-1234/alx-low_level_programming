#include <string.h>
/**
 * _strspn - returns the number of bytes in s which are alco in accept
 * @s: string to be segmented from
 * @accept: the bytes that must match
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
