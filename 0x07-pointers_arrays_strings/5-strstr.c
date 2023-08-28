#include "main.h"
/**
 *_strstr - function that locates a substring.
 *@haystack: main C string to be scanned.
 *@needle: small string to be searched with-in haystack string.
 *Return: pointer to character
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] == needle[j])
{
if (needle[j] == '\0')
return (haystack + i);
}
else
break;
}
}
return (NULL);
}
