#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - random  numbers
 *
 * Return: 0 Always
*/

int main(void)
{
	int i;
	int j = 0;
	int randnum;
	char p[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		randnum = random() % 127;
		if (randnum > 32)
		{
			p[j] = randnum;
			j++;
		}
	}
	p[j] = '\0';
	printf("%s", p);
	return (0);
}
