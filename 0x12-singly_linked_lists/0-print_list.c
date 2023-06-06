#include <stdio.h>
#include "lists.h"
/**
 * print_list - singly linked list
 * @h: pointer tofirst element in list
 *
 * Return: singly linked list node structure
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		i++;
	}
	return (i);
}
