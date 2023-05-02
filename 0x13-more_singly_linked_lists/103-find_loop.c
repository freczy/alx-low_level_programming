#include "lists.h"

/**
 * find_listint_loop - this locates loop in linked list.
 * @head: point to start of the list
 * Return: returns add of node where loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rabbit, *hare;

	rabbit = hare = head;
	while (rabbit && hare && hare->next)
	{
		rabbit = rabbit->next;
		hare = hare->next->next;
		if (rabbit == hare)
		{
			rabbit = head;
			break;
		}
	}
	if (!rabbit || !hare || !hare->next)
		return (NULL);
	while (rabbit != hare)
	{
		rabbit = rabbit->next;
		hare = hare->next;
	}
	return (hare);
}
