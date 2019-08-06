#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free with double pointer
 * @head: Store the pointer to list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (current != NULL)
	{
		current = (*head)->next;
		free(*head);
		(*head) = current;
	}
}
