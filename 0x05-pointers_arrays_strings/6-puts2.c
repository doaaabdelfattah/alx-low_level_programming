#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s : string
 *
 * Return: lenght of string
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

/**
 * puts2 - function that prints  every other character string
 * @str: string to be printed
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 'NULL')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
