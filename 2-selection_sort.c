#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - function that sorts an array of integers
 *	in ascending order using the Selection sort algorithm
 * @array: array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t a, stp, mn_idx;
	int temp;

	for (stp = 0; stp < size - 1; stp++)
	{
		mn_idx = stp;
		for (a = stp + 1; a < size; a++)
		{
			if (array[a] < array[mn_idx])
				mn_idx = a;
		}

		if (mn_idx != stp)
		{
			temp = array[stp];
			array[stp] = array[mn_idx];
			array[mn_idx] = temp;
			print_array(array, size);
		}
	}
}
