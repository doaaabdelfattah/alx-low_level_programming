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
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int len = _strlen(s);

for (i = 0; i < len ; i++)
	{
s[i] = s[len - 1 - i];
	}
}