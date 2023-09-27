#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer to list
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past_node = NULL;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = past_node;
		past_node = *head;
		*head = next_node;
	}

	*head = past_node;
	return (*head);
}
