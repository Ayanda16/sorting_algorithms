#include"sort.h"

/**
 * lomuto_partition - sort a section of an array of integers
 * @array: array of integers being sorted
 * @size: size of array
 * @start: starting index of the subset
 * @last: the last index of the subset
 *
 * Return: final pertition index
 */

int lomuto_partition(int *array, size_t size, int start, int last)
{
	int *pivot, above, below;

	pivot = array + last;
	for (above = below = start; below < last; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
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

/**
 * lomuto_sort - quicksort through recursion
 * @array: array of integers
 * @size: size of array
 * @start: first index of array partition
 * @last: last index of array partition
 */

void lomuto_sort(int *array, size_t size, int start, int last)
{
	int part;

	if (last - start > 0)
	{
		part = lomuto_partition(array, size, start, last);
		lomuto_sort(array, size, start, part - 1);
		lomuto_sort(array, size, part + 1, last);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers being sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
