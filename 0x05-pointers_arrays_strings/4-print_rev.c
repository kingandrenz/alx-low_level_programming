#include "main.h"

/**
 * print_rev - the function to print in reverse
 * @s: the character to reverse
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
