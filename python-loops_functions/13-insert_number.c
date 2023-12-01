#include "lists.h"

/**
 * insert_node - inserts node in a sorted listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be inserted
 * Return: address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = NULL;
	listint_t *current_node = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = number;
	new_node->next = NULL;

	if (*head == NULL || number < (*head)->n)
	{
		/* insertion at beginning */
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node->next != NULL && current_node->next->n < number)
		current_node = current_node->next;

	/* insertion */
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
