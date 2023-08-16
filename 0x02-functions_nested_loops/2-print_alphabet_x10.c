#include "main.h"

/**
 *print_alphabet - function print for all letters
 */
void print_alphabet_x10(void)
	{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}

	}
