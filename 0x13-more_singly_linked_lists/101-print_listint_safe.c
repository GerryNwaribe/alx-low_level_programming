#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer to list
 * Return: 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;

		if (current_node <= current_node->next)
		{
			printf("-> [%p] %d\n", (void *)current_node->next, current_node->next->n);
			return (count);
			exit(98);
		}

		current_node = current_node->next;
	}
	return (count);
}
