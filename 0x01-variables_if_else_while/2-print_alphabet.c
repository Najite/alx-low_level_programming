#include <stdio.h>

/**
 * main - Entr point
 *
 * Description: prints alphabelts in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
