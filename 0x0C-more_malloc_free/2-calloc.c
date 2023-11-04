#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of blocks of memory
 * @size: size of the element (in bytes)
 *
 * This function allocates memory for an array of elements, each of given size
 * The allocated memory is initialized to zero.
 *
 * Return: A pointer to the allocated memory (void pointer).
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
