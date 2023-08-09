#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copying
 * @str: string to copy
 * Return: pointer treturn sucess
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int a, len;

	a = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	while ((copy[a] = str[a]) != '\0')
	{
		a++;
	}
	return (copy);
}
