#include "lists.h"
/**
 * delete_nodeint_at_index - thsi function delete a node
 * @head: the head of list
 * @index: the index to put the delete node
 * Description: this function delete a node
 * section header: the header of this function is lists.h)*
 * Return: 1 in success -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *real, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	real = *head;

	if (index == '\0')
	{
		*head = real->next;
		free(real);
		return (1);
	}

	for (i = 0; real && i < index - 1; i++)
		real = real->next;

	if (real == NULL || real->next == NULL)
		return (-1);

	next = real->next->next;
	free(real->next);
	real->next = next;
	return (1);
}
