#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: position of the first node
 * @index: the position of the node
 *
 * Return: this is the pointer of Index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
