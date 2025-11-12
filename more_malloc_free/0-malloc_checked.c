#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire et quitte
 * le programme en cas d’échec
 * @b: taille en octets à allouer
 *
 * Return: pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);

	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
