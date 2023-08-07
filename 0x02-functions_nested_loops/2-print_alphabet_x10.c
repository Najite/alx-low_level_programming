#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	char counter = 1;

	while (counter < 11)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}
