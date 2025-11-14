#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour un dog_t
 * @d: pointeur vers le dog_t à libérer
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	if (d->name)
	{
		free(d->name);
	}
	if (d->owner)
	{
		free(d->owner);
	}
	free(d);
}
