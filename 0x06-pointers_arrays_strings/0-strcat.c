#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: concatenate string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (*(dest + len) != '\0')
		len++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + len) = *(src + i);
		len++;
	}
	*(dest + len) = *(src + i);

	return (dest);
}

