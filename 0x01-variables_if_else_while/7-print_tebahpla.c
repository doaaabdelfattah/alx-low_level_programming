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
	char alpha1 = 'z';

	for (alpha1 = 'z'; alpha1 >= 'a' ; alpha1--)
	{
		putchar(alpha1);
	}
	putchar('\n');
	return (0);

}
