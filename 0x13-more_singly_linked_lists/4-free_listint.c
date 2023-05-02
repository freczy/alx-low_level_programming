#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - this frees a listint_t list
 *
 * @head: this is the  head of the list
 *
 * Return: return NULL if error
 *
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
