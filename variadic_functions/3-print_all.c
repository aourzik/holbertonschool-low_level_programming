#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>

/* --- UTILITIES --- */

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: caractère à afficher
 *
 * Retourne 1 en cas de succès, sinon -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
/**
 * print_char - prints a single char
 */
void print_char(char c)
{
	_putchar(c);
}
/**
 * print_str - prints a string
 */
void print_str(char *s)
{
	int i = 0;

	if (!s)
	{
		print_str("(nil)");
		return;
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * print_int - prints an integer using _putchar
 */
void print_int(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_int(num / 10);
	}
	_putchar((num % 10) + '0');
}
/**
 * print_float - prints a float using _putchar (6 decimals)
 */
void print_float(double f)
{
	long int int_part = (long int)f;
	double frac = f - (double)int_part;
	int i;

	if (f < 0)
	{
		_putchar('-');
		f = -f;
		int_part = -int_part;
		frac = -frac;
	}
	print_int(int_part);
	_putchar('.');

	for (i = 0; i < 6; i++)
	{
		frac *= 10;
		if (i == 5)
		{
			frac += 0.5;
		}
		_putchar(((int)frac % 10) + '0');
	}
}
/* --- MAIN FUNCTION --- */

/**
 * print_all - prints anything (char, int, float, string)
 * @format: type list
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			print_str(sep);
			print_char(va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			print_str(sep);
			print_int(va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			print_str(sep);
			print_float(va_arg(args, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			print_str(sep);
			str = va_arg(args, char *);
			print_str(str ? str : "(nil)");
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	_putchar('\n');
}
