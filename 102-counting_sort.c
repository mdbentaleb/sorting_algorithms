#include "sort.h"
/**
 * counting_sort - function that sorts an array of integers
 *	in ascending order using the Counting sort algorithm
 * @array: pointer to array
 * @size: size of the array
 * Return: void
 **/
void counting_sort(int *array, size_t size)
{
	int a, x, *count_arr, *aux;
	size_t i;

	if (!array || size < 2)
		return;
	a = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > a)
			a = array[i];
	}
	count_arr = calloc((a + 1), sizeof(int));
	for (i = 0; i < size; i++)
	{
		count_arr[array[i]]++;
	}
	for (x = 1; x < a; x++)
	{
		count_arr[x + 1] += count_arr[x];
	}
	print_array(count_arr, a + 1);
	aux = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count_arr[array[i]]--;
		aux[count_arr[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
	{
		array[i] = aux[i];
	}
	free(aux);
	free(count_arr);
}

