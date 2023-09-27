#include "lists.h"
/**
 * free_listint_safe -  function that frees a listint_t list
 * @h: pointer
 * Return: 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0; /* Initialize a counter for the number of nodes */
	listint_t *current = *h; /* Create a current pointer for traversal */
	listint_t *next_node = NULL; /* Create a pointer to the next node */

	while (current != NULL)
	{
		node_count++; /* Increment the node count */
		next_node = current->next; /* Store the next node pointer */

		/* Check if the next node is NULL and print (nil) */
		if (!next_node)
		{
			printf("[%p] %s\n", (void *)next_node, "(nil)");
		}

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next_node;
	}

	*h = NULL; /* Set the head to NULL */

	return node_count; /* Return the number of nodes that were freed */
}
