#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: head
 * index: the index of the node to return
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
