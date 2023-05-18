#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates the string
 * @str: string to be copied
 *
 * Return: pointer to duplicated string.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *s;

		s = malloc(strlen(str) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			s = strdup(str);
			return (s);
		}
	}
}
