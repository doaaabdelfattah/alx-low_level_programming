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
		_putchar((i*n) + '0');
	}
}
}
