#include "main.h"
 int _check_palind(char *s, int i);
 int _strlen(char *s);

/**
 * _strlen_recursion - returns the length of a string.
 *@s: the string
 *Return: length
 */
int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen(s + 1));
}

/**
 * _check_palind - check if string is palindrome.
 * @s: pinter to string
 * @i: count
 *Return: 1 if string is palindrome otherwise 0.
 */
 int _check_palind(char *s, int i)
{
    int n = _strlen(s);
    if (i < n /2)
    {
        if (s[i] == s[n - 1 - i])
        return (_check_palind(s, i++));
    }
    return (1);
}

/**
 * is_palindrome - check if string is palindrome.
 * @s: pinter to string
 *Return: 1 if string is palindrome otherwise 0.
 */

int is_palindrome(char *s)
{
    int i = 0;
    if (_strlen(s) == 0)
    return (1);
    else
    return _check_palind(s, i);
}
