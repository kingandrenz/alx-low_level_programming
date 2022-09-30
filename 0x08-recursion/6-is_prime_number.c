#include "main.h"
#include <math.h>
#include <stdbool.h>
/**
 * is_prime_number - prints prime number
 * @n: number to check
 *
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	is_prime_number = true;
	for (i = sqrt(n); i > 1; i--)
	{
		if (n % i == 0)
		{
			is_prime_number = false;
		}


		if (is_prime_number)
		{
			_putchar("1\n");
		}
		else
		{
			_putchar("0\n");
		}
	}
}
