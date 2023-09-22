#include "sort.h"
/**
*swap_ints- swap 1 integers in an array
*@a: first integer to swap
*@b: second integer to swap
*/
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
*lomuto_partition- odrder subset of an array on integers according
*		   to lomuto partition scheme
*@array: array of integers to sort
*@size: array size
*@left: starting index of array partition to order
*@right: ending index of array partition to order
*
*/
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if(array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array, size);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}


/**
*lomuto_sort- implement the algorithm through recursion
*@array: array of integers to sort
*@size: array size
*@left: starting index of array partition to order
*@right: ending index of array partition to order
*
*/
int lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, szie, left, right);
		lomuto_sort(array, size, left, aprt - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
*quick_sort - sorts an array of integers in ascending order 
*@size: 
*
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size -1);
}
