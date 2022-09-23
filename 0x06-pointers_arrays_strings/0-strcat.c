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
	int i;
	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (0);
}
