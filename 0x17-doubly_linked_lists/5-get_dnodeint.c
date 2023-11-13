#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to head of list
 * @index: index of the node, starting from 0
 * Return: the node at index or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current->next != NULL)
	{
		if (index == 0)
		{
			return (current);
		}
		index--;
		current = current->next;
	}
	return (NULL);
}
