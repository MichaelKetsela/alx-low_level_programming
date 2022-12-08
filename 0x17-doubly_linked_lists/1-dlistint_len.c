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
