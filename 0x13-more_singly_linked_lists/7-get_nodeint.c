#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: node to retrieve
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int a = 0;

	if (head == NULL)
		return (NULL);

	for (; a < index; a++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
