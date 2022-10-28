#include "lists.h"

/**
 * print_list - a function that print all the elements of a listint_t list
 * @h: a pointer to a listint_t list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NUL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
