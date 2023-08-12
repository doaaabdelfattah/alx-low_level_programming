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
	char hex;

        for (hex ='NULL'; hex <= 'f' ; hex++)
        {
                putchar(hex);
        }
	putchar('\n');
	return (0);

}
