#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: string of types (c, i, f, s)
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i]) /* 1er while */
	{
		/* 1er if : type valide */
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep); /* 2e if implicit via sep string */

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's') /* type string */
			{
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
			}

			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
