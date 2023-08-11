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
	char alpha1 = 'a';
	char alpha2= 'A';

	for (alpha1 = 'a'; alpha1 <= 'z' ; alpha1++)
	{
		putchar(alpha1);
	}
	for (alpha2 = 'A'; alpha2 <= 'Z' ; alpha2++)
        {
                putchar(alpha2);
        }
	putchar('\n');
	return (0);

}
