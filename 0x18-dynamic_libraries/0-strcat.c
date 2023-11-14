#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: the first pointer
 *@src: string to be copied
 *
 * Return: pointer to string
 */

char *_strcat(char *dest, char *src)
{
int destlen =  _strlen(dest);
int srclen =  _strlen(src);
int i;


for (i = 0; i <= srclen; i++)
{
dest[destlen + i] = src[i];
}
dest[destlen + i] = '\0';
return (dest);

}
