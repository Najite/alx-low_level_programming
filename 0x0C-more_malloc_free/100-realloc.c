#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size of the allocated space in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* Handle special cases */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents to the new block */
	if (new_size > old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr); /* Free the old memory block */

	return (new_ptr);
}

