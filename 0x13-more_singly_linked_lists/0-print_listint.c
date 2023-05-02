#include <stdio.h>
#include "lists.h"
/**
 * print_listint - this subs prints all the elements of a listint_t list.
 *
 * @h: this is the head of linklist node
 *
 * Return: this returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
