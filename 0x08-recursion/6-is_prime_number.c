#include "main.h"
#include <math.h>
/**
 * is_prime_number - prints prime number
 * @n: number to check
 *
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	for (i = sqrt(n); i > 1; i--)
		if (n % i == 0)
		{
			return (0);
		}
	return (1);
}
