#include "main.h"
#include <limits.h>

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{

	if (n == INT_MIN)
	{
		_putchar('-');
		n = -(n / 10);

		_putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}


	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
