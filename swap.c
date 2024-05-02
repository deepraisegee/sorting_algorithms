<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

=======
>>>>>>> 6b255cba7b9aab30ec5733d163378aceb1c43c3b
/**
 * swap - swaps the values between 2 variables
 * @a: first variable
 * @b: second variable
 *
 * Return: NULL
 */

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

