#include "main.h"
#include <ctype.h>

int _islower(int c)
{
	int value;
	value = islower(c);
	if(value!=0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
