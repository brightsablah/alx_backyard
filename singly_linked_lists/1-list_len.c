#include "lists.h"

/**
* list_len - checks length of linked list
* Description: prints singly linked list length
* @head: head of linked list
*
* Return: list length
*/

size_t list_len(const list_t *head)
{
	list_t *first_node;
	list_t *last_node;
	int len = 0;

	first_node = (list_t *)head;
	last_node = first_node;

	while (last_node != NULL)
	{
		len++;
		last_node = last_node->next;
	}
	return (len);
}
