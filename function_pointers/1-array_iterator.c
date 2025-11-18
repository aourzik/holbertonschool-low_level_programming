#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - exécute une fonction sur chaque élément d'un tableau
 * @array: tableau d'entiers
 * @size: nombre d'éléments dans le tableau
 * @action: pointeur vers la fonction à appliquer à chaque élément
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
