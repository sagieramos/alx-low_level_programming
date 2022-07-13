#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates keygen.
 *
 * Return: 0 Always
*/
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 9999)
	{
		r = rand();
		if ((c + r) > 9999)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (9999 - c));
	return (0);
}
