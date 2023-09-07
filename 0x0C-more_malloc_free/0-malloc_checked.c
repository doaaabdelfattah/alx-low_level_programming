#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array -  creates an array of chars
 *@size: size of array
*@c: character
*Return: pointer to first string
*/
void *malloc_checked(unsigned int b)
{
    void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
else
{
return(ptr);
}
}
