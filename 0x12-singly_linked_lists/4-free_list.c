#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memeory allocated to the list
 * @head: pointer to first element of list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
