#include "lists.h"

/**
* free_list - frees a singly lisnked list
*
* @head: head of list
*
* Return: void
*/
void free_list(list_t *head);
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
