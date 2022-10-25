#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
