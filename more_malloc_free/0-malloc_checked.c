#include "main.h"
#include <stdlib.h>

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
