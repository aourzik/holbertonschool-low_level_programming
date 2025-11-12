#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Description: This function allocates memory and concatenates s1
 * with the first n bytes of s2. If s1 or s2 is NULL, it treats them
 * as empty strings. If malloc fails, it returns NULL.
 *
 * Return: pointer to the newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *s;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0' && size2 <= n; size2++)
		;

	s = malloc((size1 + size2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		s[size1 + i] = s2[i];
	}

	s[size1 + size2] = '\0';

	return (s);
}
