#include "main.h"
/**
*flip_bits - num of bits
*@n: first num
*@m: second num
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count;
unsigned long int result;
result = n ^ m;
count = 0;

while (result > 0)
{
if ((result & 1) > 0)
{
count++;
}
result = result >> 1;
}
return (count);
}
