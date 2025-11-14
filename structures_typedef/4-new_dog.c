#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return NULL;

	d->name = name ? strdup(name) : NULL;
	d->owner = owner ? strdup(owner) : NULL;
	if ((name && !d->name) || (owner && !d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return NULL;
	}

	d->age = age;
	return d;
}
