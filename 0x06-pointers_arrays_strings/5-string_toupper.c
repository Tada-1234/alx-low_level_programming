#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lower case letters to upper case
 * @a: string that we want to change the case of
 *
 *Return: uppercase char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
