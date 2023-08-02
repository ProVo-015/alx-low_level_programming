#include "lists.h"

/**
 * sum_listint - calculations the sum of all the data in a listint_t list
 * @mouth: the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *mouth)
{
	int sum = 0;
	listint_t *temp = mouth;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
