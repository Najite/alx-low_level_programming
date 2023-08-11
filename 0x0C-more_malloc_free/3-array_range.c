#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: Minimum value (included).
 * @max: Maximum value (included).
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *new_array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = min + i;

	return (new_array);
}

