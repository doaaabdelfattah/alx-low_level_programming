#include "main.h"
/*
 * function_islower - check for lowercase character
 */
int _islower(int c)
{
	if ( c >= 97 && c <= 122 )
	{
		return (1);
	}
	else
		return (0);
}