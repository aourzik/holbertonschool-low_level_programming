#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - cherche un entier dans un tableau à l'aide d'une fonction
 * @array: tableau d'entiers
 * @size: nombre d'éléments dans le tableau
 * @cmp: fonction utilisée pour comparer les valeurs
 *
 * Return: index du premier élément pour lequel cmp ne retourne pas 0
 *         -1 si aucun élément ne correspond ou si size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
