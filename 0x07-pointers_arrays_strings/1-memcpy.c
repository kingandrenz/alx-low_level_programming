#include "main.h"
#include <stdio.h>

/**
 * _memcpy - locate character in a string
 * @dest: memory location to be copied to
 * @src: memory location to be copied from
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
