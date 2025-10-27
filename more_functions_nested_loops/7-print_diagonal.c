#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - dessine une diagonale sur le terminal
 * @n: nombre de fois que le caractère '\' doit être imprimé
 *
 * Description:
 * Cette fonction utilise uniquement _putchar pour afficher le caractère '\'
 * de manière diagonale, en ajoutant des espaces avant chaque '\' pour
 * décaler la position. La diagonale se termine toujours par un saut de ligne.
 * Si n est 0 ou moins, seule la nouvelle ligne est affichée.
 *
 * Return: rien (void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
