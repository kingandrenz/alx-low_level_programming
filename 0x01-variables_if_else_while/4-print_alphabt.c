#include <stdio.h>

/**
*main - prints alphabeth in lower case
*
*return: all alphabeth excepth q and e or 0 (success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);

	putchar('\n');

	return (0);
}
