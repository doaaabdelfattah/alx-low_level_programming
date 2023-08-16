#include "main.h"
/**
 *print_sign - check signs
 *@n: The number to be checked
 *
 * Return: 1 if it's true. 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		char c = '+';
		
		_putchar(c);
		return (1);
	}
	if (n == 0)
	{
		char c = '0';
		
		_putchar(c);
		return (0);
	}
	else
	{
		char c = '-';
		
		_putchar(c);
		return (-1);
	}
}
