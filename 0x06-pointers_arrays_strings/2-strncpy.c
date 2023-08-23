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
 *_strncpy - function that copy string.
 *@dest: the first pointer
 *@src: string to be copied
 *@n: number of byte
 *
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int srclen = _strlen(src);
for (i = 0; i <= n  && dest[i] != '\0' ; i++)
{
	dest[i] = src[i];
}
if (n > srclen)
dest[i] = '\0';

return (dest);
}
