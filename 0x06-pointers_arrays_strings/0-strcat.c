#include "main.h"
/**
* _strcat - Entry point.
* @dest: Variable which will hold the string.
* @src: Variable which will hold the string.
* @n: int variable.
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	/*Declare and init vars*/
	int i;
	char *destPointer = dest;
	int len = 0;
	if (dest == 0)
	{
		return (0);
	}
	/*Lenght of string dest*/
	while (*dest)
	{
		len++;
		dest++;
	}
	dest = destPointer;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}