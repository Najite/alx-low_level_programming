#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Description: This creates an array of _putchar, followed by a new line
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char value[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(value[a]);
	}
	_putchar('\n');
	return (0);
}
