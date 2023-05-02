#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head node
 * @head: this is a double pointer
 *
 *Return: return empty
 *
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *start;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
