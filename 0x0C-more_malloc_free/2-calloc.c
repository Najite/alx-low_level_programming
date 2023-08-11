#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	char *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	allocated_memory = malloc(total_size);

	if (allocated_memory == NULL)
		return (NULL);

	ptr = allocated_memory;

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (allocated_memory);
}

