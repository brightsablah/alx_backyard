#include "lists.h"

/**
* add_node - adds new node
* Description: adds new node at beginning of singly linked list
* @head: head of node
* @str: data of new_node
* Return: pointer to new_node
*/


list_t *add_node(list_t **head, const char *str)
{
	char *data;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	data = strdup(str);
	
	new_node->str = data;
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
