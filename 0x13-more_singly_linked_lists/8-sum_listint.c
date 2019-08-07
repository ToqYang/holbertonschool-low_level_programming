#include "lists.h"

/**
 * sum_listint - Print the sum of the nodes
 * @head: Store the pointer of struct
 * Return: Result of sum
 */

int sum_listint(listint_t *head)
{
	listint_t *traversing;
	int result;

	traversing = NULL;
	result = 0;

	if (head == NULL)
	{
		return (0);
	}

	traversing = head;

	while (traversing != NULL)
	{
		result += traversing->n;
		traversing = traversing->next;
	}

	return (result);
}
