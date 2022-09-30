#include <stdio.h>
#include "main.h"
/**
 * puts_recursion - prints a string followed by a new line
 * @s: character to be printed
 *
 * Return: puts_recursion
 */

void _puts_recursion(char *s)
{
	if (*s <= 'z')
	{
		_putchar(*s);
		_putchar('\n');
		_puts_recursion(s++);
	}
}
