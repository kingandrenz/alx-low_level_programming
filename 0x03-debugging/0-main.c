#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
	int i;

	for (i = 0; i <= 98; i++)
	{
		if (i % 2 != 0)
		{
			printf("%d is negative\n", i);
			continue;
		}
		else
		{
			printf("%d is positive\n", i);
			break;
		}
	}
}	return (0);
