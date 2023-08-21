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
char *_strcpy(char *dest, char *src)
{
    int i, len = _strlen(src);
    for (i =0; i <= len; i++)
    {
        src[i] = dest[i];
    }
    return *dest;
}