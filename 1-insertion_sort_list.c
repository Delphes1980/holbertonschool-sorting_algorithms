#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm
* @list: a pointer to the head of the list
*
* Return: nothing.  The list will be printed each time
* after 2 elements have been swapped
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *before, *after;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		current = current->next;


		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			before = temp->prev;
			after = temp->next;

			if (before->prev)
			{
				before->prev->next = temp;
			}
			temp->prev = before->prev;

			temp->next = before;
			before->prev = temp;
			before->next = after;

			if (after)
				after->prev = before;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
		}
	}
	/*mémoriser la valeur dans temp*/

	/*swapper les elements(nodes pas list->n)*/
}
