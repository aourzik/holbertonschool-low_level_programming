#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D de dimensions données
 * @width: nombre de colonnes de la grille
 * @height: nombre de lignes de la grille
 *
 * Description: Cette fonction crée un tableau à deux dimensions
 *              d'entiers et alloue dynamiquement la mémoire
 *              nécessaire pour contenir height lignes et
 *              width colonnes. Elle vérifie aussi la validité
 *              des paramètres et l'échec possible des malloc.
 *
 * Return: pointeur vers le tableau 2D alloué,
 *         ou NULL si width/height <= 0 ou si malloc échoue
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc((height) * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
