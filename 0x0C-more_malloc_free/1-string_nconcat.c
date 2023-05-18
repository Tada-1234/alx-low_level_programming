#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - combines to strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to get from s2
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, m, j, k;

	s = malloc(strlen(s1) + n + 1);

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
	if (n >= k)
	{
		for (i = j; i < (j + k); i++)
		{
			s[i] = s2[m];
			m++;
		}
	}
	else
	{
		for (i = j; i < (j + n); i++)
		{
			s[i] = s2[m];
			m++;
		}
		s[j + n] = '\0';
	}
	return (s);
}
