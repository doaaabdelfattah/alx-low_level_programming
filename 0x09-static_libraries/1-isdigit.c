#include "main.h"
/**
 *_isdigit - function to check for digit character
 *@c: The number to be check
 *
 * Return: 1 if the character lowercase. 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
