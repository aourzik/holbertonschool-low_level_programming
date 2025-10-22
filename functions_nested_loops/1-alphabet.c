#include <stdio.h>
#include "main.h"

/**
 * main - Point d'entrée du programme
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

    while (c <= 'z')
    {
        _putchar(c);
        c++;
    }
	_putchar('\n');
	return (0);
}
