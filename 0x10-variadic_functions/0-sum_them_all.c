#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the function return the sum of all its parameters
 *@n: number of parameter
 *
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i;
	int sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
