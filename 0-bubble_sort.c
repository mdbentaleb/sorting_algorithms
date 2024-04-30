#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function that sorts a doubly linked list
 *	of integers in ascending order using the In
 * @array: array of int
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp, sorted;
	size_t x;

	if (!array || size == 0)
		return;

	do {
		sorted = 1;
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				sorted = 0;
				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;
				print_array(array, size);
			}
		}

	} while (sorted == 0);
}
