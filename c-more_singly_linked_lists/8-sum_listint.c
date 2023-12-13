#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) in a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int list_sum = 0;
	listint_t *current_node = head;
	
	while (current_node != NULL)
	{
		list_sum += current_node->n;
		current_node = current_node->next;
	}

	return (list_sum);
}
