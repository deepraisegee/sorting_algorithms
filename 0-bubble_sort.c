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
	size_t i, temp;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		/**im thinking, instead of swap, why not: 
		create a temp variable and assign it the
		value of i: temp = array[i];
		array[i] = array[i + 1]
		array [i + 1] = temp
		swap(&array[i], &array[i + 1]);**/
		temp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = temp;
	}
	print_array(array, size);
}
