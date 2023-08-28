#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: string
 *@accept: bytes to be scanned
 *Return: pointer to character
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int len = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
}
return (len);
}
