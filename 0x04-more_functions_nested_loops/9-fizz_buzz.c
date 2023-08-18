#include "main.h"
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
	int i;

	for (i = 1 ; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		printf("FizzBuzz ");
		else if (i % 5 == 0)
		printf("Buzz ");
		else if (i % 3 == 0)
		printf("Fizz ");
		else
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
