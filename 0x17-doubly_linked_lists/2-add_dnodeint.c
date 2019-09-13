#include "lists.h"

/**
 * add_dnodeint - Print the int
 * @head: Address of head of the index
 * @n: Value to put
 * Return: The list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
