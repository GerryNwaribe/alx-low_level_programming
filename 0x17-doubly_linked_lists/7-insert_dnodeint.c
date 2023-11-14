#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the head pointer
 * @idx: index at which new node is to be inserted
 * @n: data for new node
 * Return: address of new node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*h == NULL && idx > 0)
	{
		free(newnode);
		return (NULL);
	}

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = temp;
		if (temp != NULL)
			temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (idx > 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->prev = temp;
	newnode->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = newnode;

	temp->next = newnode;
	return (newnode);
}
