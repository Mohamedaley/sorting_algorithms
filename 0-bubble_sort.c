#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - orders array with bubble sort algo
 * @array: array to order
 * @size: size of the array
 * Return: array ordered
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int swap = 1, temp;

	if (!array || size < 2)
		return;
	while (swap)
	{
		swap = 0;
		for (i = 0; i < (size - 1) && i != (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		i = 0;
	}
}
