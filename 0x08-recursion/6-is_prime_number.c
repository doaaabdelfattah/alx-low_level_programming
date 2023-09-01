#include "main.h"
int _check_prime(int n, int i);
/**
 * _check_prime - check if the number is prime
 *@n: number
 *@i: count
*Return: i if prime otherwise 0;
*/

int _check_prime(int n, int i)
{
    /* iterate over n /2 */
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
*Return: 1 if prime otherwise 0;
*/

int is_prime_number(int n)
{
int i = 2;
/* 0, 1 & negative numbers aren't prime number */
if (n <= 1)
return (0);

else
return (_check_prime(n, i));
}
