#include "lists.h"

/**
 * sum_listint - addition of all the data in a listint_t linked list.
 * @head: the pointer to the first node
 *
 * Return: return the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
