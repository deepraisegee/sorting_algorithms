#include <stdio.h>

/**
  * swap - swap two given data
  * @a: pointer to a
  * @b: pointer to b
  *
  * Return: void
  */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
