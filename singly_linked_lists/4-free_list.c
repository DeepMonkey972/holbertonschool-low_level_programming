#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
