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
 * _strdup -  creates an array a copy of the string given as a parameter.
 *@str: given array
*Return: pointer to first string
*/
char *_strdup(char *str)
{
char *ptr;
unsigned int i;

unsigned int size = (_strlen(str) + 1);
ptr = (char *) malloc(size);

if (str == NULL || ptr == NULL)
{
	return (NULL);
}

else
{
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
}
