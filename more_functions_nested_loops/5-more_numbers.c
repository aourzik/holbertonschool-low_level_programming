#include "main.h"
#include <stdio.h>

/**
*more_numbers - affiche les chiffres de 0 à 14 dix fois
*Description:
*Cette fonction affiche les nombres de 0 à 14 inclus à l'écran,
*chaque nombre étant affiché caractère par caractère. L'affichage
*est répété 10 fois, chaque ligne se terminant par un saut de ligne.
*Return: rien (void)
*/
void more_numbers(void)
{
	int i, j;
	char numbers[] = "01234567891011121314";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; numbers[j] != '\0'; j++)
		{
			_putchar(numbers[j]);
		}
		_putchar('\n');
	}
}
