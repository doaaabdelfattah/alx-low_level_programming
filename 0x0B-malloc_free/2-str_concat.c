#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to first string
 */

char *str_concat(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);
char *ptr;
int i;

if (s1 == NULL)
{
s1 = "";
len1 = 0;
}

if (s2 == NULL)
{
s2 = "";
len2 = 0;
}

ptr = (char *)malloc(len1 + len2 +1 );
if (ptr == NULL)
return (NULL);

for (i = 1; i < len1; i++)
ptr[i] = s1[i];

for (i = 1; i < len2; i++)
ptr[len1 + i] = s2[i];

return (ptr);
}
