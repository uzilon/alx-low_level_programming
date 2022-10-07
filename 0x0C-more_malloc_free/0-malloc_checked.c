#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: integer to check
 * Return: a pointer or void
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
