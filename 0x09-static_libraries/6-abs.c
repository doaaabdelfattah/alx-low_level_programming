#include "main.h"
/**
 * _abs - print absolute number
 * @n: The number to be checked
 *
 * Return: the absolute number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
	n = 0 - n;
	return (n);
	}
}
