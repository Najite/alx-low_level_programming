#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 * description: the character to print
 * Return: on success 1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
