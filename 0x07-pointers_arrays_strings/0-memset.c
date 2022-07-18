#include "main.h"

/**
 * 1. memcpy - a function that copies memory area
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 *
 * @s: The output and the return
 * @b: The input string
 * @n: The number of bytes
 *
 * Return: A ptr to the memory area s
 * /
 
 char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
