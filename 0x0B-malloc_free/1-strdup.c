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
 * create_array -  creates an array of chars
 *@size: size of array
*@c: character
*Return: pointer to first string
*/
char *_strdup(char *str)
{
char *ptr;
unsigned int i;

unsigned int size = (_strlen(str) + 1);
if (*str == 0)
return (NULL);

ptr = (char *) malloc(size);
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
{
*(ptr + i) = *(str + i);
}
return (ptr);
}
}
