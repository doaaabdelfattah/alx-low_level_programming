#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars
 *@size: size of array
 *@c: character
 *Return: pointer to first string
 */

char *create_array(unsigned int size, char c)
{
char *ptr = (char*)malloc(size);
unsigned int i;
for (i = 0; i <= size; i++)
{
*(ptr+i) = c;
}
return (ptr);
}
