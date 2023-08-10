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
       char quote []= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

       for (int i = 0; i <= sizeof(quote); i++)
       {
        putchar(quote[i]);
       }
    return 0;
}

