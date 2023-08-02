#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @ear: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **ear)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*ear)
	{
		next = (*ear)->next;
		(*ear)->next = prev;
		prev = *head;
		*ear = next;
	}

	*ear = prev;

	return (*ear);
}
