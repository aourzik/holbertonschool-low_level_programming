#include "main.h"
#include <stdio.h>

/**
 * print_numbers - affiche les chiffres de 0 à 9 suivis d'une nouvelle ligne
 *
 * Return: rien (void)
 */
void print_numbers(void)
{
	int j;
	char numbers[] = "0123456789";

		for (j = 0; numbers[j] != '\0'; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
}
