#include "main.h"
/**
 * print_line -  draw stright line
 * @n: number of times the character _
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
