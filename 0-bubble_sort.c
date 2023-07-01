#include"sort.h"

/**
 * bubble_sort - sorts an array of integers
 * @array: an array to sort in ascending order
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
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
