#include <stdlib.h>
#include <time.h>
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

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes */
        if (n > 0)
        {
            printf("is positive\n");
        }
        else if (n < 0)
        {
            printf("is negative\n");
        }
        else
        {
            printf("is zero\n");
        }
        return (0);
}
