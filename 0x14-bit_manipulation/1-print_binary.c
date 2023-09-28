#include "main.h"
/**
 * print_binary - print binary rep of number
 * @n: number
 */
void print_binary(unsigned long int n)
{
if (n == 0)
	_putchar('0');
while (n >> 1)
	_putchar((n & 1) + '0');
}
