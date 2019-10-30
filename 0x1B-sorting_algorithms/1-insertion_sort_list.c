#include "sort.h"

/**
 * insertion_sort_list - Insertion order list
 * @list: List
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node = *list, *node1, *node2;
	int sentinel = 0;

	if (*list == NULL || list == NULL)
		return;

	while (curr_node != NULL)
	{
		node1  = curr_node;
		while (curr_node->prev != NULL && curr_node->n < curr_node->prev->n)
		{
			node2 = curr_node->prev;
			if (curr_node->next != NULL)
				curr_node->next->prev = node2;
			node2->next = curr_node->next;
			if (node2->prev != NULL)
				node2->prev->next = curr_node;
			curr_node->prev = node2->prev;
			node2->prev = curr_node;
			curr_node->next = node2;
			if (sentinel == 0)
				node1 = node2;
			sentinel = 1;
			if ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
		}
		curr_node = node1;
		curr_node = curr_node->next;
		sentinel = 0;
	}
}
