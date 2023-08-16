#include "main.h"
/**
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		char c = '+';
		_putchar(c);
		return (1);
	}
	if (n == 0)
	{
		char c = '0';
		_putchar(c);
		return (0);
	}
	else
	{
		char c = '-';
		_putchar(c);
		return (-1);
	}
}
