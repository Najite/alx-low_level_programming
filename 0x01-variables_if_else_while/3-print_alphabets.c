#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    char letter;

    /* Print lowercase alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print new line */
    putchar('\n');

    return 0;
}
