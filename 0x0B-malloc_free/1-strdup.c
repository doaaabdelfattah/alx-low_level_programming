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
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
		continue;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}



	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + size) = '\0';
	return (ptr);
}

