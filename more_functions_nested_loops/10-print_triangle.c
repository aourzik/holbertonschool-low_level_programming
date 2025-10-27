#include "main.h"
#include <stdio.h>

/**
 * print_triangle - affiche un triangle de taille size
 * @size: taille du triangle
 *
 * Description:
 * Cette fonction affiche un triangle rectangle avec `#` sur la
 * sortie standard. Chaque ligne contient un nombre croissant de `#`,
 * aligné à droite, et se termine par un saut de ligne. Si size <= 0,
 * seule une nouvelle ligne est affichée.
 *
 * Return: rien (void)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < size - j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
