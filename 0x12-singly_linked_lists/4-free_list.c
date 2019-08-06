#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
        list_t *current;

        while (head != NULL)
        {
                current = head->next;
		free(head);
                head = current;
        }
}
