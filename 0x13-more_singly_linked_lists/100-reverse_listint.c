#include "lists.h"

/**
 * reverse_listint - this  reverses a listint_t list
 * @head: this is a double pointer
 *
 * Return:  returns pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
