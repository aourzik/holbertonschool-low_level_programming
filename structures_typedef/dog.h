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
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*Prorotype de la fonction init_dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*Prototype de la fonction print_dog*/
void print_dog(struct dog *d);
/*Prototype du nouveau nom pour la structure struct dog*/
typedef struct dog dog_t;
/*Prototype de la fonction new_dog*/
dog_t *new_dog(char *name, float age, char *owner);
/*Prototype de la fonction free_dog*/
void free_dog(dog_t *d);

#endif
