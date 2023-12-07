#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
