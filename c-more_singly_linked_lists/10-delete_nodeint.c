#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a
* specific index in a listint_t linked list
* @head: Pointer to the address of the head of the list
* @index: Index of the node to be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);  /* list is empty or invalid head pointer */

	if (index == 0)
	{
		/* Delete the first node */
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;

	for (i = 0; i < index - 1 && current_node != NULL; i++)
	current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
	return (-1);  /* Index out of bounds and node not found */

	/*If the node is found Delete the node at the specified index */
	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);

	return (1);
}

