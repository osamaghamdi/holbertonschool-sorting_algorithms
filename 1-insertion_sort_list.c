#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using Insertion Sort
 * @list: double pointer to head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	curr = (*list)->next;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			/*swap tmp and tmp->prev*/
			listint_t *left = tmp->prev;
			listint_t *right = tmp;

			/*adjust pointers for nodes before and after the two being swapped*/
			if (left->prev)
				left->prev->next = right;
			else
				*list = right;

			if (right->next)
				right->next->prev = left;

			/*swap the two nodes*/
			left->next = right->next;
			right->prev = left->prev;
			right->next = left;
			left->prev = right;

			print_list(*list);
		}
	}
}
