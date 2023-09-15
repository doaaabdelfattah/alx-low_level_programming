#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - print string
* @separator: separator
* @n: number of string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list Strings;
va_start(Strings, n);

for (i = 0; i < n; i++)
{
printf("%s", va_arg(Strings, char*));
if ((separator != NULL) && (i < n - 1))
printf("%s", separator);
}
printf("\n");
va_end(Strings);
}
