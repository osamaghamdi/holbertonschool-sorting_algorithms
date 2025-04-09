#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 *
 * @array: Pointer to the array to sort.
 * @size: Number of elements in the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
    int i, j, temp;

    /* Loop through the array 'size' times */
    for (i = 0; i < size; i++)
    {
        /* Compare each pair of adjacent elements */
      for (j = 0; j < size - 1; j++)
      {
          /* Swap if elements are in the wrong order */
        if (array[j] > array[j + 1])
        {
          temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
            /* Print the array after each swap */
          print_array(array, size);
        }
      }
    }
}
