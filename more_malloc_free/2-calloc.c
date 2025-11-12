#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Description: This function allocates memory for an array of nmemb elements
 * of size bytes each, and returns a pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, it returns NULL.
 * The memory is not initialized to zero.
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
