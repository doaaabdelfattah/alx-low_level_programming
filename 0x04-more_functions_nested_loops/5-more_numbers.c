#include "main.h"
/**
 * print_numbers - print from 0-9
 */

void more_numbers(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
_putchar('0' + j);
}
for (k = 10; k <= 14; k++)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
