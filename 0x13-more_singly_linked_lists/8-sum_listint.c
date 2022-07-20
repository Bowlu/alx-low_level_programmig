#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a linked list
 * @head: pointer to the head node
 *
 * Return: sum of all the data of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
