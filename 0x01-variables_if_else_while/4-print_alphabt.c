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
	char c = 'a';

	for (c = 'a'; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
		{
			putchar(c++);
		}
		else
		{
			putchar(c);
		}
	}
	return (0);

}
