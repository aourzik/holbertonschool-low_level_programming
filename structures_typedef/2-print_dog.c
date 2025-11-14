#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'une structure dog
 * @d: pointeur vers la structure dog à afficher
 *
 * Description: Cette fonction affiche le nom, l'âge et le propriétaire
 * du chien. Si d est NULL, la fonction ne fait rien. Si un champ
 * de la structure est NULL, "(nil)" est affiché à la place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: 0.000000\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
