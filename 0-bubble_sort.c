#include "sort.h"

/**
 * bubble_sort - sorts array of integers using bubble sort
 * @array: ptr to the array
 * @size: size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int temp = 0;
	int flag = 0;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					flag = 1;
					print_array(array, size);
				}
			}
			if (flag == 0)
				break;
		}
	}
}
