#include "lists.h"

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *last;
	int data;

	if (*head == NULL)
		return (0);

	last = *head;
	*head = last->next;
	data = last->n;
	free(last);
	return (data);
}
