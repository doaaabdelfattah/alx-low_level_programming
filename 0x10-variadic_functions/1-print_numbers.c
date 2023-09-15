#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string between numbers
 * @n: number of int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list Numbers;
if (separator == NULL || n == 0)
	return;
va_start(Numbers, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(Numbers, int));
	if (i < n - 1)
	printf("%s", separator);
}
printf("\n");
va_end(Numbers);
}
