#include "lists.h"

/**
 * add_nodeint_end - Print the node at the end
 * @head: Ptr to struct
 * @n: Store the argument to pass
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *new_Node;

	last = NULL;
	new_Node = NULL;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;

	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_Node;

	return (*head);
}
