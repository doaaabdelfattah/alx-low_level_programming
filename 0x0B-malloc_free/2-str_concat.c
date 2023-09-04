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
int len1, len2;
char *ptr;
int i, j;

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

ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < len2; j++)
ptr[len1 + j] = s2[j];

return (ptr);
}


