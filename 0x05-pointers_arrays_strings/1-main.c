#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 1024;
	b = -409;
	_putchar("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	_putchar("a=%d, b=%d\n", a, b);
	return (0);
}
