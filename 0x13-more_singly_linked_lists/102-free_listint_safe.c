#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * _ra - reallocates mem for arr of pointers
 * to nodes in a linked list
 * @list: append the old list
 * @size: len of the new list (always one more than the old list)
 * @new: new node to added to the list
 *
 * Return: return pointer
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];
	newlist[j] = new;
	free(list);
	return (newlist);
}
/**
 * free_listint_safe - free listint_t linked list.
 * @head: this is a double pointer to the beginning of the list
 *
 * Return: returns the tot number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t j, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
