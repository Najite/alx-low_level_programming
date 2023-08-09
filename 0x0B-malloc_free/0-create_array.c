#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating of array
 * @size: size of array
 * @c: character of the array
 * Return: success
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a;

	a = 0;

	if (size == 0)
	{
		return (NULL);
	}
p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (0);
	}
	while (a < size)
	{
		*(p + a) = c;
		a++;
	}

	*(p + a) = '\0';

	return (p);
}
