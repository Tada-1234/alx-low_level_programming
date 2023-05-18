#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1: first char
 * @s2: second char
 *
 * Return: pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, m;

	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	j = strlen(s1);
	k = strlen(s2);
	m = 0;
	for (i = 0; i < j; i++)
	{
		s[i] = s1[i];
	}
	for (i = j; i < (j + k); i++)
	{
		s[i] = s2[m];
		m++;
	}
	return (s);
}
