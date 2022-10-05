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
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (yolo);
}
