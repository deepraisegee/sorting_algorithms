#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

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
