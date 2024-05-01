#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - orders array with selection sort algo
 * @array: doble pointer to node list
 * @size: size of the array
 * Return: prints array each time it swaps
 */
void selection_sort(int *array, size_t size)
{
	size_t current_index = 0, i = 0, current_index_min = 0;
	int current_min = array[0], swap_value, done = 0;

	if (!array || size < 2)
		return;
	while (current_index < size)
	{
		swap_value = array[current_index];
		current_min = array[current_index];
		for (i = (current_index + 1); i < size; i++)
		{
			if (current_min > array[i])
			{
				current_min = array[i];
				current_index_min = i;
				done = 1;
			}
		}
		if (done)
		{
			array[current_index_min] = swap_value;
			array[current_index] = current_min;
			print_array(array, size);
		}
		current_index += 1;
		done = 0;
	}
}
