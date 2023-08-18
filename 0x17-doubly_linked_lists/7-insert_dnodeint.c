#include "lists.h"

/**
 * insert_dnodeint_at_index - This inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h:  pointer to the head of the doubly linked dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: An integer for the new node to contain.
 *
 * Return: If the function fails return value should be - NULL.
 *         Else - It should return the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
