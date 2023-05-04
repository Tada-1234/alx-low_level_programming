#include "main.h"
/**
 * cap_string - capitalizes the first letter of each word
 * b: string to be capitalized
 *
 * Return: char
 */
char *cap_string(char *b)
{
	int i, j, len;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j++)
	{
		if (j == 0)
		{
			b[j] = b[j];
		}
		else if (b[j] >= '0' && b[j] <= '9')
		{
			b[j] = b[j];
		}
		else if (b[j - 1] == '\n' || b[j - 1] == '\t' || b[j - 1] == ','
			|| b[j - 1] == ';' || b[j - 1] == '.' || b[j - 1] == ' '
			|| b[j - 1] == '!' || b[j - 1] == '?' || b[j - 1] == '"'
			|| b[j - 1] == '(' || b[j - 1] == ')' || b[j - 1] == '{'
			|| b[j - 1] == '}')
		{
			if (b[j] == '\n' || b[j] == '\t' || b[j] == ',' ||
			    b[j] == ';' || b[j] == '.' || b[j] == ' ' || b[j] ==
			    '!' || b[j] == '?' || b[j] == '"' || b[j] == '(' ||
			    b[j] == ')' || b[j] == '{' || b[j] == '}')
			{
				b[j] = b[j];
			}
			else if (b[j] >= 'A' && b[j] <= 'Z')
			{
				b[j] = b[j];
			}
			else
			{
				b[j] -= 32;
			}
		}
		else
		{
			b[j] = b[j];
		}
	}
	return (b);
}
