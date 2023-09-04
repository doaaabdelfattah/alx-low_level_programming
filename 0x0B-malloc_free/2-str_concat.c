#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
int len1 = _strlen(s1);
int len2 = _strlen(s2);
int total_size = (len1 + len2 + 1);

char *ptr;
int i;

ptr = (char *)malloc(total_size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
*(ptr + i) = *(s1 + i);
}
for (i = 0; i < len2; i++)
{
*(ptr + len1 + i) = *(s2 + i);
}
*(ptr + total_size) = '\0';
return (ptr);
}
