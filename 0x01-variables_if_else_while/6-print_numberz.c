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
	int num;

	for (num = 0; num <= 9 ; num++)
	{
		putchar('0' + num);
	}
	putchar("\n");
	return (0);

}
