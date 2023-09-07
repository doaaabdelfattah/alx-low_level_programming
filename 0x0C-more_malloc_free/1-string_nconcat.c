#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes
*Return: pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *ptr;
unsigned int i, j;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

for (len1 = 0; s1[len1] != '\0'; len1++)
continue;

for (len2 = 0; s2[len2] != '\0'; len2++)
continue;

if (n >= len2)
n = len2;

ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
ptr[len1 + j] = s2[j];

ptr[len1 + n] = '\0';
return (ptr);
}
