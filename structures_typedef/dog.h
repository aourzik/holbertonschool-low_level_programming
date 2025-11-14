#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire du chien
 *
 * Description: Cette structure contient les informations de base
 * permettant de décrire un chien.
 */

/**
 * init_dog - Initialise une structure de type dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Initialise les champs de la structure dog pointée
 * par @d avec les valeurs passées en paramètres.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
