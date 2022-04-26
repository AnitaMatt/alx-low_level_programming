#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a listint_t
 * linked list
 * @head: head pointer to the node
 * @index: index node
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	if (index == count || index > count)
		return (NULL);
	count = 0;
	temp = head;
	while ((temp != 0))
	{
		count++;
		if ((count - 1) == index)
			break;
		temp = temp->next;
	}
	return (temp);
}
