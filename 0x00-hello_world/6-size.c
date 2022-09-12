#include <stdio.h>

/**
 * main - prints size of various types on the computer.
 *
 * Return: Always return 0 .
 */

int main(void)
{
	printf("size of a char: %lu bytes\n", sizeof(char));
	printf("size of an int: %lu bytes\n", sizeof(int));
	printf("size of a long int: %lu bytes\n", sizeof(long));
	printf("size of a long long int: %lu bytes\n", sizeof(double));
	printf("size of a float: %lu bytes\n", sizeof(float));


	return (0);
}
