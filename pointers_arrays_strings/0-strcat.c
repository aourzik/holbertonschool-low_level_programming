#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Description: This function appends the string pointed to by @src
 * to the end of the string pointed to by @dest. The terminating
 * null byte ('\0') at the end of @dest is replaced by the first
 * character of @src, and a new null byte is added at the end.
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
