#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
if (n < 98)
{
for ( n; n <= 98; n++)
{
if (n <=9)
{
_putchar=(n + '0');
_putchar=(',');
_putchar(' ');
}
else
{
_putchar=((n / 10) + '0');
_putchar=((n % 10) + '0');
_putchar=(',');
_putchar(' ');
}
}
}
if (n > 98)
for (n; n >= 98; n--)
{
_putchar=((n / 10) + '0');
_putchar=((n % 10) + '0');
_putchar=(',');
_putchar(' ');
}
}

