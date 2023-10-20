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

f = 1;
f = f << index;
res = n & f;
if (res == 0)
return (0);
else
return (1);
}
