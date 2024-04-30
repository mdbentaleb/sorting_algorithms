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
	size_t x, j;
	int tmp;

	if (!array || size == 0)
		return;

	x = 0;
	while (x < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		x++;
	}
}
