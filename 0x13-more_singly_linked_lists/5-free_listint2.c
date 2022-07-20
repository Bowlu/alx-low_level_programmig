#include "lists.h"

/**
 * free_listint2 -  function that frees a list
 * @head: head
 * Return: result
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	tempNode = *head;
	if (tempNode == NULL)
	{
		return;
	}
	while (tempNode != NULL)
	{
		listint_t *fr;

		fr = tempNode;
		tempNode = tempNode->next;
		free(fr);
	}
	*head = NULL;
}
