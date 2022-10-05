#include "main.h"
#include <stdio.h>

/**
 * _memcpy - locate character in a string
 * @dest: char array string
 * @src: char to look for
 * @n: the integer
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (int i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
