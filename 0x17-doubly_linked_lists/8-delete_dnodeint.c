#include "lists.h"

/**
 * dlistint_len - print all the element
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of a list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *curr = h;

	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (curr);
}

/**
 * delete_dnodeint_at_index - deltes a node in a doubly linked list
 * at a given index
 * @head: double pointer to the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;
	size_t length = dlistint_len(*head);

	if (*head == NULL)
		return (-1);

	if (index >= length)
		return (-1);
	if (index == 0 && length > 0)
	{
		*head = (*head)->next;
		if (length != 1)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (counter < index)
	{
		current = current->next;
		counter++;
	}
	if (index == length - 1)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
