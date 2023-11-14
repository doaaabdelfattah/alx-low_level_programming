#include "main.h"

/**
 *_strncat - function that concatenates two strings.
 *@dest: the first pointer
 *@src: string to be copied
 *@n: number of byte
 *
 * Return: pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
int destlen =  _strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0' ; i++)
{
dest[destlen + i] = src[i];
}
return (dest);

}
