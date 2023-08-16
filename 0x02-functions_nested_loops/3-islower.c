#include "main.h"

/**
 *_islower - function to check for lowercase character
 *@c: The number to be check
 *
 * Return: 1 if the character lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
