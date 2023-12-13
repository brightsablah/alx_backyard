#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}

		current_node = head;
		while (current_node != NULL)
		{
			printf("%d\n", current_node->n);
			current_node = current_node->next;
			node_count++;
		}

	return (node_count);
}
