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
	int n;
	int q = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes */

	if (q > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, q);
	}
	else if (q != 0 && q < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, q);
	}
	else,
	{
		printf("Last digit of %d is %d and is 0\n", n, q);
	}
	return (0);
}
