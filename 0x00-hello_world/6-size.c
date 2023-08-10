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
	char character;
	int i;
	long int q;
	long long int w;
	float fnumber;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(q));
	printf("Size of a long long int: %d byte(s)\n", sizeof(w));
	printf("Size of a float: %d byte(s)\n", sizeof(fnumber));
	return (0);
}

