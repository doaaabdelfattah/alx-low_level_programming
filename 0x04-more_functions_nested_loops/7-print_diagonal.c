#include "main.h"
/**
 * print_diagonal -  draw diagonal line
 * @n: number of times the character _
 */

void print_diagonal(int n)
{
	int row, col;

	if (n > 0)
	{
	for (row = 0; row < n; row++)
	{
		for (col = 0; col < row; col++)
		_putchar(32);

	_putchar(92);
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
