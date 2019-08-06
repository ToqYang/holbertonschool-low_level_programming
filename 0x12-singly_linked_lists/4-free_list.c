#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free memory of linked list
 * @head: Store direction of struct
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
