#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Affiche la somme des deux diagonales d'une matrice carrée
 * @a: pointeur vers le premier élément du tableau (matrice)
 * @size: taille de la matrice (nombre de lignes ou de colonnes)
 *
 * Description: Cette fonction calcule la somme de la diagonale principale
 * et celle de la diagonale secondaire d'une matrice carrée, puis les affiche.
 * Chaque élément est accessible via un index calculé
 * à partir de sa position ligne/colonne dans le tableau à une dimension.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
