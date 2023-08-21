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
 * puts_half - function that prints half of a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
    int i = 0, len = _strlen(str);

    while (i < len / 2)
    {
        if (len % 3 == 0)
        {
            _putchar(str[(len - 1 / 2) + i]);
            i++;
        }
        else
        {
            _putchar(str[(len / 2) + i]);
            i++;
        }
    }
    _putchar('\n');
}
