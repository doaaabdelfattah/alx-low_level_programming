#include "main.h"
/*
 * *
 *
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
	n = n % 10;
	_putchar('0' + n);
	return (n);
	}
	else
	{
	n = n % -10;
	_putchar('0'- n);
	return (-n);
	}
}
