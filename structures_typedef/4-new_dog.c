#include "dog.h"
#include <stdlib.h>

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
	int i;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			;
		new->name = malloc(i + 1);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; name[i] != '\0'; i++)
			new->name[i] = name[i];
		new->name[i] = '\0';
	}
	else
		new->name = (NULL);

	if (owner != NULL)
	{
		for (i = 0; owner[i] != '\0'; i++)
			;
		new->owner = malloc(i + 1);
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}
		for (i = 0; owner[i] != '\0'; i++)
			new->owner[i] = owner[i];
		new->owner[i] = '\0';
	}
	else
		new->owner = (NULL);

	new->age = age;

	return (new);
}
