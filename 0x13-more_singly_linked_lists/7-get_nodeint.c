#include "lists.h"

/**
 * get_nodeint_at_index - This returns the node at a certain
 *index in a linked list
 *@head: The first node in the linked list
 *@index: The index of the node to return
 * return: pointer to the node we're looking for, or NULL
 *
 * Description: returns the nth node of a linked list 
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
