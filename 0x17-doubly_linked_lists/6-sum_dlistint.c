#include "lists.h"

/**
 * sum_dlistint - This sums all the data of a doubly linked dlistint_t list.
 * @head: head of the doubly linked dlistint_t list.
 *
 * Return: Should return the  sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
