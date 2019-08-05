#include "lists.h"

/**
 * add_nodeint - Print the initial node
 * @head: Store the ptr to struct
 * @n: Passed argument
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
