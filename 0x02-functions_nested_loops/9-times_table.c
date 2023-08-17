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
	
	/* If the number is one digit*/
	if (k >= 9)
	{
		/* No spaces on the first column*/
		if (i == 0)
		_putchar(k + '0');
		/* on other columns */
		else
		{	
		_putchar(32);
		_putchar(32);
		_putchar(k + '0');
		}
	}
	/* if the number 2 digits */
	else 
	{
	_putchar(32);
	_putchar((k/10) + '0');
	_putchar((k % 10) + '0');
	}
	/* comma after each number except last number */
	if ( i < 9)
	_putchar(',');
	}
	/*new line*/
_putchar('\n');
}
}
