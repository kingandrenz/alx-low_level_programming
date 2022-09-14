#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1;
 * on errorm -1 is returned, and errno is set aprropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
