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

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minval = array + i;
		for (j = i + 1; j < size; j++)
			minval = (array[j] < *minval) ? (array + j) : minval;

		if ((array + 1) != minval)
		{
			swap_ints(array + i, minval);
			print_array(array, size);
		}
	}
}				
