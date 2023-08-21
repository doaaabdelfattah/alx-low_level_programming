#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
	int i;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

