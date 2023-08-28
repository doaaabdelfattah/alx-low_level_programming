#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: string
 *@accept: bytes to be scanned
 *Return: pointer to character
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
for (i = 0; accept[i] != '\0' || s[i]  != '\0'; i++)
{
if (s[i] == accept[i])
i++;
}
return (i);

}
