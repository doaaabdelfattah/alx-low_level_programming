#include "main.h"

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
 *_strncat - function that concatenates two strings.
 *@dest: the first pointer
 *@src: string to be copied
 *@n: number of byte
 *
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
int destlen =  _strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0' ; i++)
{
	dest[i] = src[i];
}
return (dest);

}
