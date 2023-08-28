#include "lists.h"

/**
 * free_listint - frees a linked listint list
 * @head: listint_t list to be freed in the nodes
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

