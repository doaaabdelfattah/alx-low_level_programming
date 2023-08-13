#include <stdlib.h>
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
    int num1, num2, num3, num4;

    for (num1 = 0; num1 <= 9; num1++)
    {
        for (num2 = 0; num2 < 9; num2++)
        {
            for (num3 = 0; num3 <= 9; num3++)
            {
                for (num4 = num4+1; num4 <= 9; num4++)
                {
                    putchar('0' + num1);
                    putchar('0' + num2);
                    putchar(32);
                    putchar('0' + num3);
                    putchar('0' + num4);
                    putchar(44);
                    putchar(32);
                    }
            }
        }
    }

    putchar('\n');
    return (0);
}
