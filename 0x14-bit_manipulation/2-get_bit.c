#include "main.h"
/**
*get_bit - returns the value of a bit at a given index.
*@n: number
*@index: index
*Return: value
*/
int get_bit(unsigned long int n, unsigned int index)
{
int f, res;
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

f = 1;
f = f << index;
res = n & f;
if (res == 0)
return (0);
else
return (1);
}
