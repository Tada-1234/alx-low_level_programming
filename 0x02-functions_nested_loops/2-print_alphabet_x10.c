#include "main.h"

void print_alphabet_x10(void)
{
	char alpha_bet;
	int i, j;
	for (i = 0; i < 10; i++)
	{
		alpha_bet = 'a';
		for (j = 0; j < 26; j++)
		{
		_putchar(alpha_bet);
		alpha_bet++;
		}
		_putchar('\n');
	}
}
