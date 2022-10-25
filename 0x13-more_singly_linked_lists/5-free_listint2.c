#include "lists.h"

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *last;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
	}
}
