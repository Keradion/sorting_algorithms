#include "sort.h"

/**
 * selection_sort - sorts array of integers using selection sort
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int min_index = 0;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i <= size - 2 ; i++)
	{
		min_index = i;
		for (j = i + 1; j < size ; j++)
		{
			if (array[min_index] > array[j])
				min_index = j;
		}

		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}

}
