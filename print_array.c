#include "sort.h"

/**
* print_array - prints an array of int
*
* @array: array to printed
* @size: size of elements array
*/
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
