#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *b)
{
	int i;

	i = 0;
	while (b[i] != '\0')
	{
		while (!(b[i] >= 'a' && b[i] <= 'z'))
		{
			i++;
			if (b[i - 1] == '\n' ||
			    b[i - 1] == '\t' ||
			    b[i - 1] == ',' ||
			    b[i - 1] == ';' ||
			    b[i] == '.' ||
			    b[i] == ' ' ||
			    b[i] == '!' ||
			    b[i] == '?' ||
			    b[i] == '"' ||
			    b[i] == '(' ||
			    b[i] == ')' ||
			    b[i] == '{' ||
			    b[i] == '}' ||
			    i == 0)
			{
				b[i] -= 32;
			}
		}
	}
	return (b);
}
