#include "main.h"

/**
 * file - prints alphabets 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int counter;
	counter = 0;
	
	while (counter < 10)
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
