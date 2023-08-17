#include "main.h"
/**
 * print_diagonal -  draw diagonal line
 * @n: number of times the character _
 */

void print_diagonal(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar(32);
	_putchar(47);
	_putchar('\n');
}
