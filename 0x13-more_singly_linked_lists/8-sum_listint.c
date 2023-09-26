#include "lists.h"
/**
 * sum_listint - sum of all the data in list
 * @head: head pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
