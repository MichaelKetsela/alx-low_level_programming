#include "lists.h"
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
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
