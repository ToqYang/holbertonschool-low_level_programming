#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node about index
 * @h:Address node
 * @idx: Number of the index
 * @n: Number node
 * Return: Node inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint *new_Node;
	dlistint *new_Last;
	unsigned int count;

	new_Node = NULL;
	new_Last = NULL;
	count = 0;

	new_Node = malloc(sizeof(dlistint));

	if (new_Node == NULL)
		return (NULL);

	new_Last = h;
	new_Node = new_Pre;
	new_Node->next = NULL;
	new_Node->prev = NULL;

	if (idx == 0)
		return (new_Node);

	while (count <= index)
	{
		++count;

		h = h->next;
	}

	new_Last = new_Node->prev;
	(new_Node->prev)->next = new_Node;



	return (new_Node);
}
