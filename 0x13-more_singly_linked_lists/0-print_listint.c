#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
