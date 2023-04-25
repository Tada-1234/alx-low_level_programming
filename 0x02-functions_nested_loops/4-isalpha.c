#include "main.h"
#include <ctype.h>

int _isalpha(int c)
{
        int value;
        value = isalpha(c);
        if(value!=0)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
