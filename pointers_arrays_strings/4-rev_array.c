#include "main.h"
#include <stdio.h>

/**
 * reverse_array - inverse le contenu d'un tableau d'entiers
 * @a: pointeur vers le tableau d'entiers
 * @n: nombre d'éléments dans le tableau
 *
 * Return: rien (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
