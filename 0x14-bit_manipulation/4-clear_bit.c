#include "main.h"
/**
*clear_bit - returns the value of a bit at a given index.
*@n: pointer to number
*@index: index
*Return: 1 if worked
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
