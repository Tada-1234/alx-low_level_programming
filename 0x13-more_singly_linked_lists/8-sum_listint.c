#include "lists.h"
/**
 * sum_listint - sums all the data in list
 * @head: pointer to first element
 *
 * Return: the som
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
