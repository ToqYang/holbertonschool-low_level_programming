#include "lists.h"

/**
 * insert_node_at_index - Print the node the index
 * @head: Double pointer for access to struct
 * @idx: Index to insert
 * @n: Value to insert
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *insert, *new_Node;
	unsigned int count;

	if(head == NULL)
		return (NULL);

	new_Node = malloc(sizeof(listint_t));

	if(new_Node == NULL)
		return (NULL);

	insert = *head;

	for (count = 0; count < idx - 1; count++)
	{
		insert = insert->next;
	}

	temp = insert->next;
	insert->next = new_Node;
	new_Node->n = n;
	new_Node->next = temp;

	return (new_Node);
}
