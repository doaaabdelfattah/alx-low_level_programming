#include "main.h"
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

for (i = 0; i < n ; i++)
{
	dest[i] = src[i];
}
return (dest);

}
