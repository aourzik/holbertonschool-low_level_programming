#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copie n octets d'une zone mémoire vers une autre
 *@dest: pointeur vers la zone mémoire de destination
 *@src: pointeur vers la zone mémoire source
 *@n: nombre d'octets à copier
 *
 *Description: Parcourt les n premiers octets de la mémoire pointée
 *par src et les copie dans la mémoire pointée par dest.
 *
 *Return: retourne le pointeur dest (début de la zone mémoire de destination)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
