#include "lists.h"
/**
 * reverse_listint - thsi reverse a list
 * @head: the head of list
 * Description: this function delete a node
 * section header: the header of this function is lists.h)*
 * Return: 1 in success -1 in failure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *real;

	if (*head == NULL)
		return (NULL);

	real = *head;

	while (real->next)
	{
		tmp = real->next;
		real->next = tmp->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
