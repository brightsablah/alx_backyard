#include "lists.h"

/**
* check_cycle - checks cycle in singly linked list
* @head: head of list
*
* Return: 1 when there is a cycle and 0 when there is no cycle
*/

int check_cycle(listint_t *head)
{
	listint_t *single_parse = head;
	listint_t *double_parse = head->next;

	if (head == NULL || head->next == NULL)
		return (0);

	while (single_parse != double_parse)
	{
		if (double_parse == NULL || double_parse->next == NULL)
			return (0);

	single_parse = single_parse->next;
	double_parse = double_parse->next->next;
	}

return (1);
}
