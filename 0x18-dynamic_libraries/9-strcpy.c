#include "main.h"

/**
 * _strcpy - function that copy string
 * @dest : pointer to array
 * @src : pointer to array
 *
 * Return: pointer to the copied array
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = _strlen(src);

for (i = 0; i <= len; i++)
{
	dest[i] = src[i];
}
return (dest);
}
