#include "sort.h"

/**
 * swap_items - swaps 2 items in an array
 * @array: array to modify
 * @l: index of the left item
 * @r: index of the right item
 * Return: void
 */
void swap_items(int *array, size_t l, size_t r)
{
	int tp;

	if (array != NULL)
	{
		tp = array[l];
		array[l] = array[r];
		array[r] = tp;
	}
}


/**
 * quick_sort_range_lomuto - Sorts a sub array
 * @array: array containing the sub-array
 * @low: starting position of the sub-array
 * @high: ending position of the sub-array
 * @size: length of the array
 * Return: void
 */
void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size)
{
	size_t y, a;
	int pivot;

	if ((low >= high) || (array == NULL))
		return;
	pivot = array[high];
	y = low;
	for (a = low; a < high; a++)
	{
		if (array[i] <= pivot)
		{
			if (k != a)
			{
				swap_items(array, y, a);
				print_array(array, size);
			}
			y++;
		}
	}
	if (y != high)
	{
		swap_items(array, y, high);
		print_array(array, size);
	}
	if (y - low > 1)
		quick_sort_range_lomuto(array, low, y - 1, size);
	if (high - y > 1)
		quick_sort_range_lomuto(array, y + 1, high, size);
}

/**
 * quick_sort - array sortting bu using quick sort algorithm
 * @array: array to sort
 * @size: length of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_range_lomuto(array, 0, size - 1, size);
	}
}
