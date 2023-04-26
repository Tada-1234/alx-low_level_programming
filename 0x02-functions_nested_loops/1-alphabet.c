#include "main.h"
/**
 * print_alphabet - print all letters of the alphabet
 * parameters: none
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char alpha_bet;
	int i;

	alpha_bet = 'a';
	for (i = 0; i < 26; i++)
	{
		_putchar(alpha_bet);
		alpha_bet++;
	}
	_putchar('\n');
}
