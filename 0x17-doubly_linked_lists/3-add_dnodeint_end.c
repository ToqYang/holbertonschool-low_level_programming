#include "lists.h"

/**
 * add_dnodeint_end - Add node to the end
 * @head: Store the pointer to pointer to structure
 * @n: Store the intege
 * Return: node of type dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node;
	dlistint_t *new_Last;

	new_Node = malloc(sizeof(dlistint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	new_Last = *head;

	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		while (new_Last->next != NULL)
		{
			new_Last = new_Last->next;
		}
		new_Last->next = new_Node;
		new_Node->prev = new_Last;
	}

	return (new_Node);
}
