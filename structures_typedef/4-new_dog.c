#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Alloue et copie une chaîne de caractères
 * @str: chaîne à copier
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *copy_string(char *str)
{
	char *copy;
	int i;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	copy = malloc(i + 1);
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers le nouveau dog_t, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (NULL);
	}

	d->name = copy_string(name);
	d->owner = copy_string(owner);

	if ((name && !d->name) || (owner && !d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
