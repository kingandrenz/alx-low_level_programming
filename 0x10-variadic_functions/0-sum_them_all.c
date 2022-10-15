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
	va_list arglist;
	int i;

	if (n == 0)
		return (0);
	int sum = 0;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);

	return (sum);
}
