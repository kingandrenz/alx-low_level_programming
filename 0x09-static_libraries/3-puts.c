#include "main.h"
/**
 * _puts - the function to print strings
 *@str: THis is the C string to be written
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
