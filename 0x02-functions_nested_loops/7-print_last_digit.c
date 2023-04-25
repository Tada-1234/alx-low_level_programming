#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int print_last_digit(int x)
{
    	int y, z;
	y = abs(x);
	z = y % 10;
	printf("%d", z);
	return (z);
}
