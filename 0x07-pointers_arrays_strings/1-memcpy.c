#include "main.h"
/**
 *_memcpy - function that copy memory.
 *@dest: the destination.
 *@src: source
 *@n: number of bytes
 *Return: pointer to character
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);

}