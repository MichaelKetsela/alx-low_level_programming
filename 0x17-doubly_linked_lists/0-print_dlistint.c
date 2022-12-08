#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
