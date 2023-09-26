#include "lists.h"
/**
 * listint_len - returns the number of elements in list
 * @h: pointer
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
