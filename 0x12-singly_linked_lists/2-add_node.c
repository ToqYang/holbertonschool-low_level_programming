#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add node
 * @head: Pointer to pointer to a struct
 * @str: Store the string
 * Return: Node struct list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_Ptr;

	new_Ptr = malloc(sizeof(list_t));

	if (new_Ptr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new_Ptr->str = strdup("%p");
		new_Ptr->len = 0;
	}
	else
	{
		new_Ptr->str = strdup(str);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new_Ptr->len = i;
	new_Ptr->next = *head;
	*head = new_Ptr;

	return (*head);
}
