#include "sort.h"
/**
 * bubble_sort - A function to sort an array using bubble sort algorithm
 * @array: a point to the array
 * @size: the size of the array;
 * Return: None;
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = size;
	int temp;

	if (array == NULL)
		return;
	for (j = size; j > (size / 2 + 1); j--)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
