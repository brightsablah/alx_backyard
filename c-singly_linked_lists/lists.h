#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - singly linked list
* @str: string - malloc'ed string)
* @len: length of string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};
typedef struct list_s list_t;

int _putchar(char c);
void print_string(char *str);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**
* print_string - prints string
* @str: input string
*
*
void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
*/
#endif
