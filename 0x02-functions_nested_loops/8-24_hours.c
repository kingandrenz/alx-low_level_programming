#include "main.h"

/**
 * jack_bauer - function that prints every minutes of the day
 * starting from 00:00 to 23:59
 *
 * Return: does not return any value.
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 3; j++)
			for (k = 0; k <= 5; k++)
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					if (!(i == 2 && j == 3 && k == 5 && l == 9))
						_putchar('\n');
				}
	_putchar('\n');
}
