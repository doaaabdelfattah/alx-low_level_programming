#include "main.h"

/**
 *main - starting point
 *
 *print_alphabet: function print for all letters
 *
 */
void print_alphabet(void)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
