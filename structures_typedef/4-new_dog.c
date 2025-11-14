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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return NULL;

	if (name != NULL)
	{
		new->name = malloc(strlen(name) + 1);
		if (new->name == NULL)
		{
			free(new);
			return NULL;
		}
		strcpy(new->name, name);
	}
	else
		new->name = NULL;

	if (owner != NULL)
	{
		new->owner = malloc(strlen(owner) + 1);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return NULL;
		}
		strcpy(new->owner, owner);
	}
	else
		new->owner = NULL;

	new->age = age;

	return new;
}
