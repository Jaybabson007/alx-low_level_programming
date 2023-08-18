#include "lists.h"

/**
 * print_dlistint - This prints all the elements of a dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: This should return the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
