#include "main.h"
/**
* _strcat - Entry point.
* @dest: Variable which will hold the string.
* @src: Variable which will hold the string.
* @n: int variable.
* Return: dest.
*/
char *_strcat(char *dest, char *src)
{
    /*Declare and initialize variables*/
    int i;
    char *destptr = desst;
    int len = 0;

    if (dest == 0)
        return (0);

    /*lenght of string dest*/
    while (*dest)
    {
        len++;
        dest++;
    }
    dest = destptr;
    for (i =0; i < n && src[i]; i++)
    {
        dest(len + i) = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}