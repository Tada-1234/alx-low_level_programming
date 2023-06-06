#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint linked list
 * @head: pointer to first element
 *
 * Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *address[1024];/* Array to store visited node address*/

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (current == address[i])
			{
				printf("-> [%p] %d\n", (void *)current,
				       current->n);
				return (count);
			}
		}

		address[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}
