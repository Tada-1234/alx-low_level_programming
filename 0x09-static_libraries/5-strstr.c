#include <string.h>
/**
 * _strstr - finds the occurance of the needle in haystack
 * @haystack: the string to look through
 * @needle: the string to look for
 *
 * Return: returns the pointer to the substring needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
