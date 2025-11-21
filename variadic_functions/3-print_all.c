#include <stdarg.h>
#include <unistd.h>

/* _putchar */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/* utilitaires */
void print_char(char c) { _putchar(c); }

void print_str(char *s)
{
	int i = 0;
	if (!s)
		s = "(nil)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}

void print_int(int n)
{
	unsigned int num;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print_int(num / 10);
	_putchar((num % 10) + '0');
}

void print_float(double f)
{
	long int int_part = (long int)f;
	double frac = f - int_part;
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
			frac += 0.5;
		_putchar(((int)frac % 10) + '0');
	}
}

/* structure pour associer type et fonction */
typedef struct printer
{
	char *symbol;
	void (*f)(va_list);
} printer_t;

/* wrappers pour utiliser va_list */
void print_c(va_list args) { print_char(va_arg(args, int)); }
void print_i(va_list args) { print_int(va_arg(args, int)); }
void print_f(va_list args) { print_float(va_arg(args, double)); }
void print_s(va_list args) { print_str(va_arg(args, char *)); }

/* petit utilitaire pour _putchar sur une chaîne */
void _putchar_str(char *s)
{
	int k = 0;
	while (s[k])
	{
		_putchar(s[k]);
		k++;
	}
}
/* print_all avec exactement 2 if */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}};

	va_start(args, format);

	while (format && format[i]) /* 1er while */
	{
		j = 0;
		while (funcs[j].symbol) /* 2e while */
		{
			/* 1er if : type trouvé */
			if (format[i] == *(funcs[j].symbol))
			{
				_putchar_str(sep);
				funcs[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);

	/* 2e if : fin de ligne (optionnel pour respecter 2 if max) */
	_putchar('\n');
}
