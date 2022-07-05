#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char msgchar[] = "_putchar";
	int msg;
	for (msg = 0; msg <= 7; msg++)
	{
		_putchar(msgchar[msg]);
	}
	_putchar('\n');
	return (0);
}     
