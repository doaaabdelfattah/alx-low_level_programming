#include <unistd.h>
#include "main.h"
/**
 *main - starting point
 *
 *Description: main function for all other functions
 *
 *Return: 0 if program success
 */
int main(void)
{
	char arr[] = "_putchar";
	for (int i = 0; i < 8 ; i++)
	_putchar(arr[i]);
	_putchar('\n');
	return 0;

}
