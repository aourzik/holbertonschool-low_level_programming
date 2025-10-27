#include "main.h"
#include <stdio.h>


/**
 * print_square - affiche un carré de taille size
 * @size: taille du carré
 *
 * Description:
 * Cette fonction utilise uniquement _putchar pour afficher un carré
 * de `size` lignes et `size` colonnes avec le caractère '#'.
 * Chaque ligne est suivie d'un saut de ligne. Si size est 0 ou moins,
 * seule une nouvelle ligne est affichée.
 *
 * Return: rien (void)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
