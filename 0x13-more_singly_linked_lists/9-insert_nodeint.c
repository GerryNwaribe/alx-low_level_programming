#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: head pointer
 * @idx: the index of the list where the new node should be added
 * @n: number to be inserted
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current_node = *head;
	if (idx == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
	}
	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
