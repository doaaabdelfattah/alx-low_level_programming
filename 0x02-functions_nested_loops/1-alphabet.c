#include "main.h"

/**
 *main - starting point
 *
 *Description: main function for all other functions
 *
 *Return: 0 if program success
 */
void print_alphabet(void)
	{
		char c = 'a';
		for (c = 'a'; c<='z'; c++)
			_putchar(c);
		_putchar('\n');
	}
