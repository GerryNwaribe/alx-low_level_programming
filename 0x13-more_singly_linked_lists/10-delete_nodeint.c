#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index to be deleted
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *current_node = *head;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{

		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (current_node != NULL &&  a < index - 1)
	{
		temp = current_node;
		current_node = current_node->next;
		a++;
	}
	if (current_node == NULL  || current_node->next == NULL)
		return (-1);

	temp->next = current_node->next;
	free(current_node);
	return (1);
}
