#include "function_pointers.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

void print(char *name)
{
	int i = 0;

	if (name == NULL)
	{
		return;
	}

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
