#include "main.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@s: the memory to be filled
 *@b: charatcer
 *@n: number of bytes
 *Return: pointer to character
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);

}
