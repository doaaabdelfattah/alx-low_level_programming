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
		if (hex < 9 )
		{
			putchar(44);
			putchar(31);
		}
	}

	putchar('\n');
	return (0);

}
