#include "main.h"

/**
 * print_chessboard - affiche un échiquier
 * @a: tableau 8x8 représentant l'échiquier
 *
 * Description: Parcourt le tableau à deux dimensions et affiche
 * chaque caractère en utilisant _putchar. Chaque ligne se termine
 * par un retour à la ligne.
 *
 * Return: rien (void)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
