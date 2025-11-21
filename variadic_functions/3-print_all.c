#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_i - Prints an integer.
 * @args: All the arguments given to the main function.
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: All the arguments given to the main function.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: All the arguments given to the main function.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_char - Prints a char.
 * @args: All the arguments given to the main function.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_all - Prints all the arguments given to the function.
 * @format: String with the keyword of all the argument types to be printed.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	ty_pe t[] = {
		{print_char, 'c'},
		{print_i, 'i'},
		{print_float, 'f'},
		{print_string, 's'},
	};

	va_start(args, format);
	while (format && format[i])
	{
		while (j <= 3)
		{
			if (t[j].key == format[i])
			{
				printf("%s", sep);
				t[j].ptr(args);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	va_end(args);
}
