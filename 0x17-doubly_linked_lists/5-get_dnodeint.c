#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node, starting from 0
 * Return: the nth node of the list, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if(!head)
	{
		return (NULL);
	}
	return (head);
}
