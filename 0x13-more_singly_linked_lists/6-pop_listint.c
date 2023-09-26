#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: double pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current_node = *head;

	if (head == NULL || *head == NULL)
		return (0);

	n = current_node->n;
	*head = current_node->next;

	free(current_node);


	return (n);
}
