#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in the linked list
 * @head: pointer to the list
 * Return: sum of the element
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
