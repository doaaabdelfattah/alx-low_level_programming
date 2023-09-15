#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list input;
	va_start(input, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(input, int));
				break;
                        case 's':
                                printf("%s", va_arg(input, char *));
                                break;
                        case 'i':
                                printf("%d", va_arg(input, int));
                                break;
                        case 'f':
                                printf("%f", va_arg(input, double));
                                break; 
		}
		i++;
	}
	printf("\n");
}

