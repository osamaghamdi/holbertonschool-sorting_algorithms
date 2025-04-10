#include "sort.h"

/**
 * bubble_sort - Sorts an array of
 * integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	/*Loop through the array 'size' times*/
	for (i=0 ; i < size ; i++)
	{
		/*Compare each pair of adjacent elements*/
		for (j=0 ; j < size - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
