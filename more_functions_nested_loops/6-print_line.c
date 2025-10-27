#include "main.h"
#include <stdio.h>

/**
 * print_line - dessine une ligne droite dans le terminal
 * @n: nombre de fois que le caractère '_' doit être imprimé
 *
 * Description:
 * Cette fonction utilise uniquement _putchar pour afficher le caractère '_'
 * à l'écran n fois, suivi d'un saut de ligne. Si n est 0 ou moins, seule
 * la nouvelle ligne est affichée.
 *
 * Return: rien (void)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
