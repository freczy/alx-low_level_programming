#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - this reallocates d  memory for an array of pointers
 * to the nodes present in a linked list
 * @list: this append the old list
 * @size: size of d new list (this is always one more than the old list)
 * @new: this add new node to the list
 *
 * Return: this returns a pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe - this prints out a listint_t linked list.
 * @head: pointer from the beginning of the list
 *
 * Return: the tot num of nodes in d list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
