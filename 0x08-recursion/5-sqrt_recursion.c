#include "main.h"
int _root(int n, int r);
/**
 * _root - returns the root.
 *@n: the number
 *@r: root
 *Return: the natural square
 */
int _root(int n, int r)
{
if (r * r == n)
{
return (r);
}
else
return (_root(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: the number
 *Return: the natural square
 */


int _sqrt_recursion(int n)
{
int r = 0;
if (n == 1)
return (1);

if (n < 0)
return (-1);

return (_root(n, r));

}
