#include "main.h"
/**
 * _abs - print absolute number
 * @a: The number to be checked
 *
 * Return: the absolute number
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else
	{
	a = 0 - a;
	return (a);
	}
}
