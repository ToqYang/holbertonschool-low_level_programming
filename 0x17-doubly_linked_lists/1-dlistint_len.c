#include "lists.h"

/**
 * dlistint_len - Print the length og the elements
 * @h: Store the direction of the head of the node
 * Return: Length of the nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length_Node;

	length_Node = 0;

	while (h != NULL)
	{
		h = h->next;
		++length_Node;
	}

	return (length_Node);
}
