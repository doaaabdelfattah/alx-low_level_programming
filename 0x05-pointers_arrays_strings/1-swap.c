#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first number
 * @b: second number
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b =  *a;
	*a = tmp;
}