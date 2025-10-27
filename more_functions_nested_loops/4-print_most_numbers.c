#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - affiche les chiffres de 0 à 9 sauf 2 et 4
*Description:
*Cette fonction affiche tous les chiffres de 0 à 9 à l'écran,
*à l'exception des chiffres 2 et 4, suivis d'une nouvelle ligne.
*Return: rien (void)
*/
void print_most_numbers(void)
{
	int j;
	char numbers[] = "01356789";

		for (j = 0; numbers[j] != '\0'; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
}
