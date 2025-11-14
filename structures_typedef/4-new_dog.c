#include "dog.h"
#include <stdlib.h>

/* Fonction auxiliaire pour copier une chaîne */
char *copy_string(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
		;
	copy = malloc(i + 1);
	if (copy == NULL)
		return NULL;
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return copy;
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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return NULL;

	new->name = copy_string(name);
	new->owner = copy_string(owner);
	if ((name && !new->name) || (owner && !new->owner))
	{
		free(new->name);
		free(new->owner);
		free(new);
		return NULL;
	}

	new->age = age;
	return new;
}
