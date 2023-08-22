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
 * _atoi - function that convert a string to an integer.
 * @s : string
 *
 * Return: the number
 */
int _atoi(char *s)
{
int count, i, sign, len = _strlen(s);
count = 0;
sign = 1;

for (i = 0; i < len; i++)
{
    if (s[i] >= '0' && s[i] <= '9')
    {
        if (s[i - 1] == '-')
        sign = -1;
        count = (s[i] - 48) + count * 10;
    }
    if (s[i] == 32)
    break;
}
return (count *sign);
}
