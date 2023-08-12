#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - starting point
 *
 *Description: main function for all other functions
 *
 *Return: 0 if program success
 */
int main(void)
{
	int hex;

	for (hex = 0 ; hex <= 9 ; hex++)
	{
		putchar('0' + hex);
		putchar(44 );
	}

	putchar('\n');
	return (0);

}
