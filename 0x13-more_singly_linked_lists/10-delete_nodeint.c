#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Pointer to a pointer to the head node.
 * @index: Index of the node to delete.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		previous = current;
		current = current->next;
	}

	if (current != NULL)
	{
		previous->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}
