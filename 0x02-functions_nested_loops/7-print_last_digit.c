#include "main.h"

/**
 * print_last_digit - function that print last digit of its
 * argument.
 *
 * @n: integer to print it's last digit.
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = n * -1;

	a = n % 10;
	_putchar(a + '0');

	return (a);

}
