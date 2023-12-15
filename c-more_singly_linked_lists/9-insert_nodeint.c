#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific
 * index in a listint_t linked list
 * @head: Pointer to the address of the head of the list
 * @idx: Index where the new node should be added
 * @n: Data to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		add_nodeint(head, n);

	current_node = *head;

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

/**
* add_nodeint - adds new node
* Description: adds new node at beginning of singly linked list
* @head: head of node
* @n: data of new_node
* Return: pointer to new_node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
