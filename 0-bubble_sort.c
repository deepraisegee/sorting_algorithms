#include <stdio.h>

#include "sort.h"


/**
  * bubble_sort - sorts an array of integers in ascending
  * order using the Bubble sort algorithm
  * @array: pointer to the array
  * @size: size of the array
  *
  * Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
			swap(&array[i], &array[i + 1]);
	}
	print_array(array, size);
}
