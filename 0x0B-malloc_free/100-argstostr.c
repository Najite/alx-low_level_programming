#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure or invalid arguments.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *result = (char *)malloc(total_length + 1);
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /* Account for the '\n' */
	}
	if (result == NULL)
		return (NULL);
	/* Copy the arguments to the concatenated string */
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';
	}

	result[k] = '\0';

	return (result);
}

