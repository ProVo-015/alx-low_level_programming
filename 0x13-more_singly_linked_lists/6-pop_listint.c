#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @brain: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **brain)
{
	listint_t *temp;
	int num;

	if (!brain || !*brain)
		return (0);

	num = (*brain)->n;
	temp = (*brain)->next;
	free(*brain);
	*brain = temp;

	return (num);
}
