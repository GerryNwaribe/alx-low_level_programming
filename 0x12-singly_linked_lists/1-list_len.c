#include "lists.h"
/**
 * list_len - returns the num of elements in linked list_t
 * @h: pointer to list
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
