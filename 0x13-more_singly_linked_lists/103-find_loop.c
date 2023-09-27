#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer
 * Return: 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_point = head;
	listint_t *fast_point = head;

	while (slow_point && fast_point && fast_point->next)
	{
		slow_point = slow_point->next;       /* Move the tortoise one step */
		fast_point = fast_point->next->next;        /* Move the hare two steps */

		if (slow_point == fast_point)           /* If they meet, there is a loop */
		{
			/* Move one of the pointers to the head and start again */
			slow_point = head;
			while (slow_point != fast_point)
			{
				slow_point = slow_point->next;
				fast_point = fast_point->next;
			}
			return (fast_point); /* Return the node where the loop starts */
		}
	}

	return (NULL); /* No loop found */
}
