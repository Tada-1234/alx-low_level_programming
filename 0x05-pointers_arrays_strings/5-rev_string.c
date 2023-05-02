#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints the string in reverse
 * @s: holds the address of the string
 *
 * Return: has no return
 */
void rev_string(char *s)
{
	int i, a, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		a = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = a;
	}
}
