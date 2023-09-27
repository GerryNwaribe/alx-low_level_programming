#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head pointer to list
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past_node = NULL;
	listint_t *next_node;
	listint_t *current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = past_node;
		past_node = current_node;
		current_node = next_node;
	}

	*head = past_node;
	return (*head);
}
