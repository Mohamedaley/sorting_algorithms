#include "sort.h"
/**
 * bubble_sort - A function to sort an array using bubble sort algorithm
 * @array: a point to the array
 * @size: the size of the array;
 * Return: None;
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int aux = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
