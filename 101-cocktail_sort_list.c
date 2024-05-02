#include "sort.h"

/**
 * ft_swap - Swaps two nodes
 * @node: node base to change
 * @list: double link list head
 * Return: void
 */
void ft_swap(listint_t **node, listint_t **list)
{
	listint_t *temp = *node, *temp2, *temp3;


	if (!(*node)->prev)
		*list = (*node)->next;

	temp = temp3 = *node;
	temp2 = temp->next;

	temp->next = temp2->next;
	temp3 = temp->prev;
	temp->prev = temp2;
	temp2->next = temp;
	temp2->prev = temp3;

	if (temp2->prev)
		temp2->prev->next = temp2;


	if (temp->next)
		temp->next->prev = temp;

	*node = temp2;

}


/**
 * cocktail_sort_list - function that sorts a doubly linked list
 *	of integers in ascending order using
 *	the Cocktail shaker sort algorithm
 * @list: head of list
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *hd, *aux;
	int x = 0, n = -1, m = -1;

	if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
		return;

	hd = *list;
	while (m >= n)
	{
		n++;
		while (hd->next && x != m)
		{
			if (hd->n > hd->next->n)
			{
				aux = hd;
			       ft_swap(&aux, list);
			       print_list(*list);
			       hd = aux;
			}

			x++;
			hd = hd->next;
		}

		if (n == 0)
			m = x;
		m--;
		while (hd->prev && x >= n)
		{
			if (hd->n < hd->prev->n)
			{
				aux = hd->prev;
				ft_swap(&aux, list);
				print_list(*list);
				hd = aux->next;
			}
			x--;
			hd = hd->prev;
		}
	}
}
