#include "sort.h"
/**
 * partition - separate the array into to partitions
 * @array: doble pointer to node list
 * @first: start of sublist
 * @end: end of sublist
 * @size: size of the array
 * Return: prints array each time it swaps
 */
int partition(int *array, int first, int end, size_t size)
{
	int pivot_index = first, i = first;
	int pivot = array[end], temp;

	for (i = first; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			temp = array[i];
			array[i] = array[pivot_index];
			array[pivot_index] = temp;
			if (pivot_index != i)
				print_array(array, size);
			pivot_index += 1;
		}
	}
	temp = array[pivot_index];
	array[pivot_index] = pivot;
	array[end] = temp;
	if (pivot_index != end)
		print_array(array, size);
	return (pivot_index);
}
/**
 * sort - sort recursively both sublists
 * @array: pointer to aaray
 * @first: start of sublist
 * @end: end of sublist
 * @size: size of the array
 * Return: prints array each time it swaps
 */
void sort(int *array, int first, int end, size_t size)
{
	int pivot_index;

	if (first < end)
	{
		pivot_index = partition(array, first, end, size);
		sort(array, first, pivot_index - 1, size);
		sort(array, pivot_index + 1, end, size);
	}
}
/**
 * quick_sort - orders array with quick sort algo
 * @array: pointer to array
 * @size: size of the array
 * Return: prints array each time it swaps
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	sort(array, 0, size - 1, size);
}
