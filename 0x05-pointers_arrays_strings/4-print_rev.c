#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s : string
 *
 * Return: lenght of string
 */

<<<<<<< HEAD
/**
 * _strlen - function that returns the length of a string
 * @s : string
 *
 * Return: lenght of string
 */



=======
>>>>>>> f29220a3052d95446fb4fb341e76dc553c9d01f9
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
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = 1; i <= len; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}
