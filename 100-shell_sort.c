#include "sort.h"
#include <stdio.h>
/**
 * ft_swap - swaped ttwo values
 * @array: array for swap him values
 * @i: first index
 * @j: second index
 * Return: Nothing
 */
void ft_swap(int *arr, int i, int k)
{
	int temp;

	if (arr[i] != arr[k])
	{
		temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}
}


/**
 * shell_sort - sort the list and print the changes
 * @array: array to sort
 * @size: array size
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t x = 0,  i, k;

	if (size < 2)
		return;

	while (x <= size / 3)
		x = x * 3 + 1;

	while (x >= 1)
	{
		for (i = x; i < size; i++)
			for (k = i; k >= x && array[k] < array[k - x]; k -= x)
				ft_swap(array, k, k - x);
		x /= 3;
		print_array(array, size);
	}
}
