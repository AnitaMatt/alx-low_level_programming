#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a list and sets head to null
 * @head: head pointer to the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != 0)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
