#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sumfunction
* @n: number of int
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list sumptr;
if (n == 0)
return (0);
va_start(sumptr, n);
i = 0;
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(sumptr, int);
va_end(sumptr);
return (sum);

}

