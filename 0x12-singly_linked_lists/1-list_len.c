#include <stdio.h>
#include "lists.h"
/**
 * list_len - determine the length of linked list
 * @h: pointer ro head of list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
