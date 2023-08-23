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
 * _strcat - function that concatenates two strings.
 *@dest: the first pointer
 *@src: string to be copied
 */

char *_strncat(char *dest, char *src, int n)
{
int destlen =  _strlen(dest);
// int srclen =  _strlen(src);
int i;


for (i = 0; i <= n; i++)
{
dest[destlen + i] = src[i];
}
return (dest);

}
