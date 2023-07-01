#include"sort.h"

/**
 * selection_sort - sorts aan array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *minval;

	for (i = 0; i < size - 1; i++)
	{
		minval = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *minval)
				minval = (array + j);
		}
		if ((array + 1) != minval)
		{
			swap_ints(array + i, minval);
			print_array(array, size);
		}
	}
}

/**
 * swap_ints - swap two integers in an array
 * @a: integer 1 to swap
 * @b: integer 2 to swap
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
