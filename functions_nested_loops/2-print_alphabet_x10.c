#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - imprime dix fois l'alphabet en minuscules,
 *                      suivi d'un retour à la ligne à chaque fois
 *
 * Description: Cette fonction affiche les lettres de l'alphabet en minuscules
 * dix fois, de 'a' à 'z'. Après chaque alphabet complet, elle affiche un
 * saut de ligne. Elle utilise uniquement la fonction _putchar.
 *
 * Return: Rien (void)
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
