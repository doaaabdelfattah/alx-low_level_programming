#include "main.h"
int _check_palind(char *s, int len, int i);
int _strlen(char *s);

/**
 * _strlen - returns the length of a string.
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
 * *@len: length of string
 *Return: 1 if string is palindrome otherwise 0.
*/
int _check_palind(char *s, int len, int i)
{

if (i <= len / 2)
{

if (s[i] == s[len - i - 1])
{
_check_palind(s, len, i++);
return(1);
}

else
return(0);
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
int len = _strlen(s);

if (len == 0)
return (1);

return (_check_palind(s, len, i));
}
