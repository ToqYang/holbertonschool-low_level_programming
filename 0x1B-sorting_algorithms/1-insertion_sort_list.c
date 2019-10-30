#include "sort.h"

/**
 * insertion_sort_list - Insertion order list
 * @list: List
 */

void insertion_sort_list(listint_t **list)
{
	/** Verify if the list is NULL */
	if (*list == NULL || list == NULL)
		return;

	listint_t *curr_node = *list;
	listint_t *prev_node = curr_node;

	/** Loop until that the current node will be NULL */
	while (curr_node != NULL)
	{
		/** Copy of the position of the current node for after
		    traversing
		    in reverse */
		prev_node = curr_node;

		/** If the node prev not is the head */
		if (prev_node->prev != NULL)
		{
			/** Loop for traversing in reverse until find NULL */
			while (prev_node != NULL)
			{
				/** Current node number is less than
				    previous */
				if (prev_node != NULL || prev_node->n < prev_node->prev->n)
				{
					/** Next node is equal to direction of
					    the next */
					prev_node->next = prev_node->prev;
					/** The prev node, the next is the
					    current node */
					prev_node->prev->next = prev_node;
					/** The current node prev is equal the
					    next of the next node with the
					    swapping */
					prev_node->prev = prev_node->next->prev;
					/** The next node, the previous pointing
					    to previous node
					 */
					prev_node->next->prev = prev_node;
				}

				/** Traversing in reverse */
				prev_node = prev_node->prev;
			}
		}
		curr_node = curr_node->next;
	}
}
