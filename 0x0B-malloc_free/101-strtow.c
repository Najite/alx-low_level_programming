#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL on failure or invalid input.
 */

char **strtow(char *str)
{
	int wc = 0, iw = 0, i, j = 0 , k = 0;
	char **w = malloc((wc + 1) * sizeof(char *));

	if (!str || !*str)
		return (NULL);
	for (i = 0; str[i]; i++)
		str[i] == ' ' ? (iw = 0) : (!iw ? (wc++, iw = 1, j = i) : (void)0);
	if (!w)
		return (NULL);

	iw = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (!iw)
			{
				iw = 1;
				j = i;
			}
		}else if (iw)
		{
			iw = 0;
			w[k] = strndup(str + j, i - j);
			if (!w[k] && (k = -1))
				break;
			k++;
		}
	}
	if (iw)
	{
		w[k] = strndup(str + j, i - j);
		if (!w[k] && (k = -1))
			return (NULL);
		k++;
	}

	w[k] = NULL;
	return (k == -1 ? (free(w), NULL) : w);
}

