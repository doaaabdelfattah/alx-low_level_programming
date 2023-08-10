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
	char c;
	int i;
	long int q;
	long long int w;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(q));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(w));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}

