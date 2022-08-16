#include "lists.h"
/**
 * free_listint - free a list
(* a blank line
*@head: the head of list
* Description: this function free a list.)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
*/
void free_listint(listint_t *head)
{
	listint_t *spot;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		spot = head;
		head = head->next;
		free(spot);
	}
	head = '\0';
}
