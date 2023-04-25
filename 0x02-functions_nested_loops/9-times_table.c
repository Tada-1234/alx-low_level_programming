#include "main.h"
#include <stdio.h>
void times_table(void)
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		printf("0, ");
		for (j = 0; j < 9; j++)
		{
			printf("%d, ", i+j );
		}
		printf("\n");
	}
}
