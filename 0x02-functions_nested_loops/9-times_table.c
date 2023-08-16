#include "main.h"
/**
 *
 *
 */
void times_table(void)
{
	int n,i;
	for (n = 0; n <= 9; n++)
	{
	for (i = 0; i <= 9; i++)
	{
	int k = n * i;
	if ( k <= 9)
	{
	_putchar(k + '0');
	_putchar(',');
	_putchar(32);
	_putchar(32);
	}
	else 
	{
	_putchar((k/10) + '0');
	_putchar((k % 10) + '0');
	_putchar(',');
	_putchar(32);
	}

}
_putchar('\n');
}
}
