#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 : prints alphabet 10 times in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
		_putchar('\n');
	}
}
