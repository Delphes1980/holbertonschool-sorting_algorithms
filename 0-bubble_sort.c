#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending
* order using the Bubble sort algorithm
* @array: the array to be printed
* @size: the size of the array
*
* Return: Nothing. The array will be printed each time
* after 2 elements have been swapped
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

/*Array traversal - 1 at each iteration because the last element is in place*/
	for (i = 0; i < size - 1; i++)
	{
/*Array traversal until (i - 1) at each iteration*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
			/** Swap of 2 elements */
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
