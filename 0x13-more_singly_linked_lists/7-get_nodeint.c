#include "lists.h"

/**
 * get_nodeint_at_index - Print the node about index
 * @head: Store the pointer to structure
 * @index: Store the index
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *get_Node;

	get_Node = head;

	for (i = 0; i < index; i++)
	{
		get_Node = get_Node->next;

		if(head == NULL)
		{
			return (NULL);
		}
	}

	return (get_Node);
}
