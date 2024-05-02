#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> 6b255cba7b9aab30ec5733d163378aceb1c43c3b
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
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
<<<<<<< HEAD
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
		/**
		 * im thinking, instead of swap, why not:
		 * create a temp variable and assign it the
		 * value of i: temp = array[i];
		 * array[i] = array[i + 1]
		 * array [i + 1] = temp
		 */
		swap(&array[j], &array[j + 1]);
		print_array(array, size);
		/**
		 * tmp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = tmp;
		*/
=======
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
			else
				continue;
			print_array(array, size);
>>>>>>> 6b255cba7b9aab30ec5733d163378aceb1c43c3b
		}
	}
}
