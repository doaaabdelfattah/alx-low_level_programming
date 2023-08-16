#include "main.h"
/*
 * *
 *
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
