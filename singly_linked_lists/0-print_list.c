#include "lists.h"

/**
* print_list - prints singly linked list
* Description: prints data in a singly linked list
* @head: head of singly linked list
*
* Return: number of elements in singly linked list
*/

size_t print_list(const list_t *head)
{
	size_t list_len = 0;
	list_t *first_node;
	list_t *last_node;

	first_node = (list_t *)head;
	last_node = first_node;

	while (last_node != NULL)
	{
		if (last_node->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", last_node->len);
			printf("%s\n", last_node->str);
		}

		list_len++;
		last_node = last_node->next;
	}
	return (list_len);
}
