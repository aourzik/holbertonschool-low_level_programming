#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, (double)va_arg(args, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
