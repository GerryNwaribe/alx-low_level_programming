#include "lists.h"
/**
 * print_listint -  prints all the elements of listint_t list
 * @h: pointer
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
