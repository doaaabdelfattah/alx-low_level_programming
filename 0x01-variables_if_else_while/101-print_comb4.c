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
	int num1, num2, num3;

	for (num1 = 0 ; num1 <= 9 ; num1++)
	{
		for (num2 = num1 + 1  ; num2 <= 9 ; num2++)
		{
			for(num3 = num2 + 1; num3 <=9 ; num3++)
			{
			putchar('0' + num1);
			putchar('0' + num2);
			putchar('0' + num3);
			if (num1 < 8 && num2 <9 && num3 < 10)
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}	

	putchar('\n');
	return (0);

}
