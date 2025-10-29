#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatène deux chaînes
 * @dest: pointeur vers la chaîne de destination
 * @src: pointeur vers la chaîne source
 * @n: nombre maximum d'octets de src à ajouter
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
