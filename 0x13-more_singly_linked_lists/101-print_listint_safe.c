#include "lists.h"
/**
 * free_listint_safe - thsi function free a list in safe mode
 * @h: the head of list
 * Description: this function free a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *real;
	size_t i;
	int rest;

	i = 0, real = *h;

	while (real)
	{
		rest = real - real->next;
		if (rest > 0)
		{
			tmp = real->next;
			free(real);
			real = tmp;
			i++;
		} else
		{
			free(real);
			*h = NULL;
			i++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
