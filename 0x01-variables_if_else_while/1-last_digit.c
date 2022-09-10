#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main -  assign a random number to variable each time it is executed
 *
 * Retturn (o)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 8) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 8);
	else if ((n % 8) < 6 && (n % 8) != 0) 
		printf("Last digiit of %d is %d and is less than 6 and not 0\n", n, n % 8);
	else 
		printf("Last digit of %d is %d and is 0\n", n, n % 8);

	return (0);
}
