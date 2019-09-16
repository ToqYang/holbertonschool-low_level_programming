#include "lists.h"

/**
 * free_dlistint - Free node
 * @head: Store the ptr at the node to free
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *del_Node;

	while (head != NULL)
	{
		del_Node = head->next;
		free(head);
		head = del_Node;
	}
}
