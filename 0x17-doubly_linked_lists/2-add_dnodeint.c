#include "lists.h"

/**
 * add_dnodeint - This adds a new node at the beginning of the dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node 
 *
 * Return: If the function fails - NULL.
 *         Else - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
