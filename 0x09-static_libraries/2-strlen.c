#include "main.h"

/**
 *  _strlen - function that will check characters len.
 *  @s: print character except null
 *
 *  Return: nothing
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
