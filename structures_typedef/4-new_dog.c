#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Crée un nouveau chien et copie ses informations
 * @name: nom @age: âge  @owner: propriétaire
 * Return: pointeur vers le dog_t créé, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	if (name)
	{
		d->name = malloc(strlen(name) + 1);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		strcpy(d->name, name);
	}
	else
		d->name = (NULL);
	if (owner)
	{
		d->owner = malloc(strlen(owner) + 1);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		strcpy(d->owner, owner);
	}
	else
		d->owner = (NULL);
	d->age = age;
	return (d);
}
