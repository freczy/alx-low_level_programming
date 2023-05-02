#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - this function frees a listint_t list
 * @head: double pointer of lists
 *
 * Return: return void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
