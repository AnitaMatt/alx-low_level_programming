#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head pointer for the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != 0)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
