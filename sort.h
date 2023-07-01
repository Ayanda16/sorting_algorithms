#ifndef SORT_H
#define SORT_H

#include<stdio.h>
#include<stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/**
 * enum bool - enumerate boolean values
 * @false: equals 0
 * @true: equals 1
 */

typedef enum bool
{
	false = 0,
	true
} bool;

/* functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_ints(int *a, int *b);
void swap_list(listint_t **head, listint_t **node1, listint_t *node2);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif