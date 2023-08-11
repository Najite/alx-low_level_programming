#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* If n is greater or equal to s2 length, use entire s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy n bytes of s2 to concatenated */
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0'; /* Null-terminate the string */

	return (concatenated);
}

