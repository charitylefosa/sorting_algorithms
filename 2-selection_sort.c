#include "sort.h"

/**
<<<<<<< HEAD
 * swaap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: the seond integer to swap.
 */
void swap_int(int *a, int *b)
=======
* swap_ints- swap integers in array
*@a: first int o swap
*@b: second int to swap
*
*/
void swap_ints(int *a, int *b)
>>>>>>> 8f2021579318103d1f0aed29faa6153405a6e525
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
<<<<<<< HEAD
 * selection_sort - Sort an array of integers in ascending order
 * 		    using the selction sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap/
 */
void selecton_sort(int *array, size_t size)
=======
*selection_sort- sort an array of integers in ascending order
*		 using the selection sort algorithm
*@array: array of integers
*@size: array size
*
*/
void selection_sort(int *array, size_t size)
>>>>>>> 8f2021579318103d1f0aed29faa6153405a6e525
{
	int *min;
	size_t i, j;

<<<<<<< HEAD
	if (array == NULL || size < 2)
=======
	if (array == NULL|| size < 2)
>>>>>>> 8f2021579318103d1f0aed29faa6153405a6e525
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
<<<<<<< HEAD
		for (j = I + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array +i) != min)
=======
		for (j = i; j < size; j++)
			min = (array[j] < *min ? (array + j) : min);
		if ((array + i) != min)
>>>>>>> 8f2021579318103d1f0aed29faa6153405a6e525
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
<<<<<<< HEAD
=======
	
>>>>>>> 8f2021579318103d1f0aed29faa6153405a6e525
