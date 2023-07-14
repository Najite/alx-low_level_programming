#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabets in lower, followd by upper
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	/* Print lower alphabet */
	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	/* Print uppercase */
	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
