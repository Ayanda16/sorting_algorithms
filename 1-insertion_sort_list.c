#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: list to sort in ascending order
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *tmp;
	
	if (list == NULL || *list == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swap_list(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * swap_list - swap elements of a doubly linked list
 * @head: first element of the linked list
 * @node1: node to swap with node2
 * @node2: node to swap with node1
 * Return: void
 */

void swap_list(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}
