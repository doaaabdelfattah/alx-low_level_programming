#include "main.h"
int _check_prime(int n, int i);

int _check_prime(int n, int i)
{
    if (i <= n / 2)
    {
        if (n % i != 0)
        {
            return (_check_prime(n, i + 1));
        }
        else
            return (0);
    }
    return (1);
}
/**
 * is_prime_number - check if the number is prime
 *@n: number
 *Return: i if prime otherwise 0;
 */

int is_prime_number(int n)
{
    int i = 2;
    if (n == 0 || n == 1)
        return (0);
    else
        return (_check_prime(n, i));
}
