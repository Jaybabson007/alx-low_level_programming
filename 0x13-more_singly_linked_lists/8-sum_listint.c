#include "lists.h"

/**
 * sum_listint -  This calculates the sum of all the data in a listint_t list
 *@head: The first node in the linked list
 * return: returns the resulting sum
 *
 * Description: returns the sum of all the data (n) of a linked list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
