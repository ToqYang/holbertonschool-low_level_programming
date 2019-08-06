#include "lists.h"

/**
 * free_listint - Print the free
 * @head: Store the ptr to free
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *delete;

	while (head != NULL)
	{
		delete = head->next;
		free(head);
		head = delete;
	}
}
