#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a
 * given index in a doubly linked list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (!current)
			return (-1);
	}

	temp = current->next;
	if (!temp)
		return (-1);

	current->next = temp->next;
	if (temp->next)
		temp->next->prev = current;

	free(temp);
	return (1);
}
