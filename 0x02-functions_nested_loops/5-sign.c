#include "main.h"

/**
 * print_sign - print value
 * @n: type to be checked
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(0);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
