#include "sort.h"

/**
 * partition - scans a partition of an array of integers for values less than
 * the pivot value, swaps the first value in the partition, and swaps the
 * pivot value with the first value in the partition.
 * @array: array of integers to sort.
 * @start: index in array that begins the partition.
 * @end: index in array that ends the partition.
 * @size: number of elements in the array.
 * Return: new index to start the next recursive partition.
 */

int partition(int *array, int start, int end, size_t size)
{

int i, j, last, tmp;

last = array[end];
i = start;

for (j = start; j < end; j++)
{

if (array[j] < last)
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;

if (array[i] != array[j])
print_array(array, size);
i++;

}

}

tmp = array[i];
array[i] = array[end];
array[end] = tmp;
if (array[i] != array[end])
print_array(array, size);
return (i);

}

/**
 * quicksort - recursively sorts an array of integers by separating it into two
 * partitions using the Lomuto partition scheme.
 * @array: array of integers to sort.
 * @start: index in array that begins the partition.
 * @end: index in array that ends the partition.
 * @size: number of elements in the array.
 */

void quicksort(int *array, int start, int end, size_t size)
{

int part;

if (start < end)
{

part = partition(array, start, end, size);
quicksort(array, start, part - 1, size);
quicksort(array, part + 1, end, size);

}

}

/**
 * quick_sort - prepares the ground for quick sorting.
 * @array: the array to sort.
 * @size: size of the array.
 */

void quick_sort(int *array, size_t size)
{

quicksort(array, 0, size - 1, size);

}
