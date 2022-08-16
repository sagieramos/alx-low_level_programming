#include "lists.h"
/**
 * print_listint_safe - tprints a listint_t linked list.
 * @head: head
 * Returns: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int difference, index, number;
	void *address;

	index = 0;

	while (head != NULL)
	{
		difference = head - head->next;
		index++;
		number = head->n;
		printf("[%p] %i\n", (void *)head, number);
		if (difference > 0)
			head = head->next;
		else
		{
			address = head->next;
			number = head->next->n;
			printf("-> [%p] %i\n", address, number);
			break;
		}
	}
	return (index);
}
