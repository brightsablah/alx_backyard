#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the address of the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (head != NULL)
	{
/* saving copy of next node */
		next = (*head)->next;
/* reversing the link to the node */
		(*head)->next = prev;
/* moving prev to current node which in this case is (*head) */
		prev = *head;
/* move current node (*head) to the next node */
		*head = next;
	}

	*head = prev;

	return (*head);
}
