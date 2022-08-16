#include "lists.h"
/**
 * insert_nodeint_at_index - thsi function create a new index
 * @head: the head of list
 * @idx: the index to put the new node
 * @n: the value to put in the nex node.
 * Description: this function create a new index
 * section header: the header of this function is lists.h)*
 * Return: return the final result of the sum
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *spot;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == '\0')
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	spot = *head;

	for (i = 0; spot; i++)
	{
		if (i == idx - 1)
		{
			node->next = spot->next;
			spot->next = node;
			return (node);
		}
		spot = spot->next;
	}
	free(node);
	return (NULL);
}
