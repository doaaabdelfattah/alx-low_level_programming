#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);
	
	for (i = 0; i <= len; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}	
