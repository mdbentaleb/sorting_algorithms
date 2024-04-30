#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function that sorts an array of integers
 *	in ascending order using the Bubble sort algorithm
 * @array: array of int
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t l;
	int tmp, sor;

	if (!array || size == 0)
		return;

	do {
		sor = 1;
		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				sor = 0;
				tmp = array[l];
				array[l] = array[l + 1];
				array[l + 1] = tmp;
				print_array(array, size);
			}
		}

	} while (sor == 0);
}
