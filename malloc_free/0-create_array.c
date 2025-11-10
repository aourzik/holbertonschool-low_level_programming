#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et
 * l'initialise avec un caractère spécifique
 * @size: la taille du tableau à créer
 * @c: le caractère utilisé pour initialiser le tableau
 *
 * Description:
 * Cette fonction alloue dynamiquement un tableau de taille 'size',
 * puis remplit chaque élément avec le caractère 'c'. Si la taille
 * est nulle ou si l'allocation échoue, la fonction renvoie NULL.
 *
 * Return: un pointeur vers le tableau nouvellement créé,
 *         ou NULL en cas d'erreur ou si size vaut 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
