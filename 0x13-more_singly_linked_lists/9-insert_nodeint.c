#include "lists.h"

/**
 * insert_nodeint_at_index - Print the node the index
 * @head: Double pointer for access to struct
 * @idx: Index to insert
 * @n: Value to insert
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *insert, *new_Node;
	unsigned int count;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL || *head == NULL)
		return (NULL);

	insert = *head;

	if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;
	}
	else
	{
		for (count = 1; count < idx; count++)
		{
			insert = insert->next;
		}
		temp = insert->next;
		insert->next = new_Node;
		new_Node->n = n;
		new_Node->next = temp;
	}
	return (new_Node);
}
