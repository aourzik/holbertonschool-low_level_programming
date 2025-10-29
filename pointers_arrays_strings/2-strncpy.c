#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copie une chaine dans une autre
 * @dest: pointeur vers la chaine de destination
 * @src: pointeur vers la source
 * @n: nombre maximum de caractères à copier
 *
 * Return: pointeur vers dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
