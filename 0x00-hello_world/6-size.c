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
	/*
	*printf function
	*/
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of a char: %d byte(s)\n", sizeof(int));
	printf("Size of a char: %li byte(s)\n", sizeof(long int));
	printf("Size of a char: %lli byte(s)\n", sizeof(long long int));
	printf("Size of a char: %f byte(s)\n", sizeof(float));
	return (0);
}

