#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);
	
	for (i = len; i >= 0; i--)
	{
		_putchar(s[len - i]);
	}
}	
