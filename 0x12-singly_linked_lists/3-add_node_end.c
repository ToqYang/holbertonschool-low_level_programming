#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add nodeto the end
 * @head: Store the pointer to pointer to structure
 * @str: Store the string
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	last = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
