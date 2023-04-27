#include "main.h"
#include <ctype.h>

int _isdigit(int c)
{
	int x;

	x = isdigit(c);
	if (x > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
