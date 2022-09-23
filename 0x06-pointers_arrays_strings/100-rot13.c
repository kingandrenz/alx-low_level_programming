#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char *rot13(char *)
{
	int i;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; *[i] != '\0'; i++)
	{
		if ((*[i] > 64 && *[i] < 91) || (*[i] > 96 && *[i] < 123))
		{
			*[i] = (*[i] - 65 > 25) ?
				storel[*[i] - 97] : storeh[*[i] - 65];
		}
	}
	return (*);
}
