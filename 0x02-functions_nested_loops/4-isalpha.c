#include "main.h"

/**
 *_isalpha - function to check for alphabetical character
 *@c: The number to be check
 *
 * Return: 1 if the character lowercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
