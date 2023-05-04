#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= '1' && b[i] <= '9')
		{
			if (b[i + 1] >= '1' && b[i+ 1] <= '9')
                        {
                                b[i + 1] = b[i + 1];
                        }
                        else
                        {
                                b[i + 1] = b[i + 1] - 32;
                        }
		}
		else if (b[i] == '\n' || b[i] == '\t' || b[i] == ',' || b[i] == ';')
		{
			if (b[i + 1] >= '1' && b[i+ 1] <= '9')
			{
				b[i + 1] = b[i + 1];
			}
			else
			{
				b[i + 1] = b[i + 1] - 32;
			}
		}
		else if (b[i] == '.' || b[i] == ' ' || b[i] == '!')
		{
			if (b[i + 1] >= '1' && b[i+ 1] <= '9')
                        {
                                b[i + 1] = b[i + 1];
                        }
                        else
                        {
                                b[i + 1] = b[i + 1] - 32;
                        }
		}
		else if (b[i] == '?' || b[i] == '"' || b[i] == '(')
		{
			if (b[i + 1] >= '1' && b[i+ 1] <= '9')
                        {
                                b[i + 1] = b[i + 1];
                        }
                        else
                        {
                                b[i + 1] = b[i + 1] - 32;
                        }
		}
		else if (b[i] == ')' || b[i] == '{' || b[i] == '}')
		{
			if (b[i + 1] >= '0' && b[i+ 1] <= '9')
                        {
                                b[i + 1] = b[i + 1];
                        }
                        else
                        {
                                b[i + 1] = b[i + 1] - 32;
                        }
		}
		else
		{
			b[i+1] = b[i+1];
		}
	}
	return (b);
}
