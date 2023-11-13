#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: pointer to head of list
 * Return: sum of all data (n) in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
