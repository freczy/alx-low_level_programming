#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - add node at the start of a listint_t list.
  *
  * @head: double pointer head
  * @n: add the int list
  * Return: return NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
