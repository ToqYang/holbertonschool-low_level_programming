#include "lists.h"

/**
 * get_dnodeint_at_index - Get the index
 * @head: Address of the node
 * @index: The node
 * Return: List
 */
 
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t int count;
	dlistint_t *new_Node;
	
	count = 0;
	new_Node = NULL;

	if (head == NULL)
		return (NULL);
		
	new_Node = head;
	
	while (count < index)
	{
		node = node->next;
		
		if (new_Node)
			return (NULL);
			
		++count;
	}
	
	if (index == 0)
		return (head);

	return (new_Node);
}
