#include "lists.h"

/**
 * sum_dlistint - Sum all nodes
 * @head: Address of the node
 * Return: Result of the sum 
 */
 
int sum_dlistint(dlistint_t *head)
{
	int result;
	dlistint_t *ref_Node;
	
	result = 0;
	ref_Node

	if (head == NULL)
		return (0);
		
	ref_Node = head;
	
	while (ref_Node != NULL)
	{
		result += ref_Node->n;
		ref_Node = ref_Node->next;
	}

	return (result);
}
