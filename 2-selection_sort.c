#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* using the Selection sort algorithm
* @array: the array to be sorted in ascending order
* @size: the size of the array
*
* Return: nothing. The array will be printed each time
* after 2 elements have been swapped
*/

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min_index = 0, temp = 0;

	if (array == NULL || size < 2)
	{
		return;
	}

/*Traversal of the array*/
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;/*the minus index of the array*/

/*Traversal of the rest of the array (i+1)*/
		for (j = i + 1; j < size; j++)
		{
/*If an index is < to min_index, we update min_index*/
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

/*If min_index is not at the right place, we swap*/
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
