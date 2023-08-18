#include "lists.h"

/**
 * get_dnodeint_at_index - This locates a node in a doubly linked dlistint_t list.
 * @head: head of the dlistint_t list.
 * @index: The node to be located.
 *
 * Return: If the node does not exist - NULL.
 *		Else - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
