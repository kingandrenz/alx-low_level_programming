#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - this function appends the src string to string
 *@dest: the pointer that the string is to be appended
 *@src: the pointer to append
 *
 * Return: always 0 .
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
