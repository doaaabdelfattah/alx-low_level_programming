#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: string
 *@accept: bytes to be scanned
 *Return: pointer to character
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
unsigned int len = 0;

while (s[i] != '\0')
{
    while (accept[j] != '\0' && s[i] != accept[j])
    {
        len++;
        j++;
    }
    i++;
}
return (len);
}
