#include "lists.h"

/**
 * get_dnodeint_at_index - Get the index
 * @head: Address of the node
 * @index: The node
 * Return: List
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count;
	dlistint_t *new_Node;

	count = 0;
	new_Node = NULL;

	if (head == NULL)
		return (NULL);

	new_Node = head;

	if (index == 0)
		return (new_Node);

	while (count < index)
	{
		new_Node = new_Node->next;

		if (new_Node == NULL)
			return (NULL);

		++count;
	}

	return (new_Node);
}
