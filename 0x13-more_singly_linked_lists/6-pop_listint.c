#include "lists.h"

/**
 * pop_listint - Print the head node
 * @head: Double ptr
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmp_Num;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = (*head)->next;
	tmp_Num = (*head)->n;

	free(*head);

	*head = tmp;

	return (tmp_Num);
}
