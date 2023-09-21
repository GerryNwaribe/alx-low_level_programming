#include "lists.h"
/**
 * print_list - prototype to print list
 * @h: pointer to node
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		num++;
	}

	return (num);
}
