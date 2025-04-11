#include "sort.h"

/**
 * quick_sort_recursive - Recursively sorts using quick sort logic.
 * @array: The array.
 * @low: The starting index.
 * @high: The ending index.
 * @size: The full size of the array (used for printing).
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;
	int i = low, j, temp;

	if (array == NULL || size < 2)
		return;

	/*Base case: stop if there's 1 or no element*/
	if (low >= high)
		return;

	/*The last element is choosen as pivot*/
	pivot = array[high];

/*Traversal from low to before the pivot*/
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)/*If current element is less than pivot*/
		{
			if (i != j)/*Swap only if needed*/
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;/*Move the boundary of smaller element*/
		}
	}
/*Puts the pivot to its corect position*/
	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	/* Recursive calls for left and right sides */
	quick_sort_recursive(array, low, i - 1, size);
	quick_sort_recursive(array, i + 1, high, size);
}

/**
* quick_sort - sorts an array of integers in ascending order
* using the Quick sort algorithm
* @array: the array to be sorted in ascending order
* @size: the size of the array
*
* Return: Nothing. The array will be printed each time
* after 2 elements have been swapped
*/

void quick_sort(int *array, size_t size)
{
	int low = 0, high = (int)size - 1;

	if (array == NULL || size < 2)
		return;

	/* Recursive quick sort with everything inside */
	quick_sort_recursive(array, low, high, size);
}
