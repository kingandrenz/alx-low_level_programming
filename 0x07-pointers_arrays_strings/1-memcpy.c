#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (*dest != '\0')
	{
		if (*dest == *src)
			return (dest);
		else if (*(dest + 1) == n)
			return (dest + 1);
		dest++;
	}

	return (dest + 1);
}
