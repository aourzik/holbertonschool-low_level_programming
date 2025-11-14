#include "dog.h"

/**
 * init_dog - Initialise une structure de type dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Cette fonction remplit les champs de la structure dog
 * avec les valeurs données en paramètres. La structure doit être
 * déjà allouée avant l’appel de cette fonction.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
