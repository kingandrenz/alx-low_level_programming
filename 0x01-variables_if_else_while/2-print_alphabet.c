#include <stdio.h>
/**
 * main - a function that prints the alphabeth in lowercase
 * @n: the alphabeth to be checked
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

return (0);
}
