#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - print anything
* @format: format
*/
void print_all(const char * const format, ...)
{
int i, flag;
char *str;
va_list input;
va_start(input, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
if (flag == 1 && (format[i] == 'c' ||
	format[i] == 's' || format[i] == 'i' || format[i] == 'f'))
printf(", ");

switch (format[i])
{
case 'c':
printf("%c", va_arg(input, int));
flag = 1;
break;
case 's':
str = va_arg(input, char*);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
flag = 1;
break;
case 'i':
printf("%d", va_arg(input, int));
flag = 1;
break;
case 'f':
printf("%f", va_arg(input, double));
flag = 1;
break;
}
i++;
}
printf("\n");
}

