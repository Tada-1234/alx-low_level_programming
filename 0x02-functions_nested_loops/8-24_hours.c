#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * jack_bauer - prints every hour of the day in 24 hour format
 * parameters: none
 *
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int j, i, hour, minute;
	char str[30];

	hour = minute = 0;
	for (i = 0; i < 24; i++)
	{
		*str = '\0';
		if (i == 0)
		{
			sprintf(str, "%d%d", hour, hour);
			hour++;
		}
		else if (i < 10 && i != 0)
		{
			sprintf(str, "0%d", hour++);
		}
		else
		{
			sprintf(str, "%d", hour++);
		}
		for (j = 0; j < 60; j++)
		{
			if (j == 0)
			{
				printf("%s:%d%d\n", str, minute, minute);
				minute++;
			}
			else if (j < 10 && j != 0)
			{
				printf("%s:0%d\n", str, minute++);
			}
			else
			{
				printf("%s:%d\n", str, minute++);
			}
		}
		minute = 0;
	}
}
